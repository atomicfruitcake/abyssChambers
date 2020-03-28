#include <stdio.h>
#include "object.h"
#include "misc.h"

int checkWeaponInInventory(const char *weapon)
{
   if (inCurrentInventory(player, weapon)) {
      return 0;
   }
   return 1;
}

static void attack(const char *noun, OBJECT *to, const char *weapon)
{
   if (weapon == NULL)
   {
      printf("You have not selected a weapon to attack with");
      return;
   }
   OBJECT *wep = parseObject(weapon);
   if (!checkWeaponInInventory(weapon))
   {
      printf("No %s found in your inventory, cannot attack", weapon);
      return;
   }

   if (to == to->location)
   {
      switch (distanceTo(to))
      {
      case distPlayer:
         printf("You should not be doing that to yourself.\n");
         break;
      default:
         printf("You cannot attack that");
      }
   }
   else if (to == NULL)
   {
      printf("There is nothing here to attack.\n");
   }
   else if (weapon == NULL)
   {
      printf("I don't understand what weapon you want to attack with\n");
   }
   else if (to->health - wep->attack > 0)
   {
	   to->health = to->health -  wep->attack;
	   player->health = player->health - to->attack;
	   printf("You did %d damage to %s.\n",  wep->attack, to->tags[0]);
	   printf("%s has %d health remaining\n", to->tags[0], to->health);
	   printf("\n%s fights back and does %d damage\n", to->tags[0], to->attack);
	   printf("You now have %d health", player->health);
   }
   else if (to->health - wep->attack <= 0)
   {
      printf("You killed the '%s'\n", to->tags[0]);
      to->health = 0;      
      to->location = NULL;
   }
}

void executeAttack(const char *noun, const char *weapon)
{
   attack(noun, personHere(), weapon);
}