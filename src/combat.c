#include <stdio.h>
#include "object.h"
#include "misc.h"

static void attack(const char *noun, OBJECT *to, const char *weapon)
{
   OBJECT *wep = parseObject(weapon);

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
   }
}

void executeAttack(const char *noun, const char *weapon)
{
   attack(noun, personHere(), weapon);
}