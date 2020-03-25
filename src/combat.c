#include <stdio.h>
#include "object.h"
#include "misc.h"

static void attack(const char *noun, OBJECT *from, OBJECT *to)
{
   OBJECT *obj = parseObject(noun);
   if (obj == NULL)
   {
      printf("I don't understand what weapon you want to attack with\n");
   }
   else if (from == obj->location)
   {
      switch (distanceTo(obj))
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
   else if (obj->weight + weightOfContents(to) > to->capacity)
   {
      printf("That would become too heavy.\n");
   }
   else if (from->health - obj->attack <= 0)
   {
      printf("You killed the '%s'.\n", from->tags[0]);
   }
}

void executeAttack(const char *noun)
{
   attack(noun, personHere(), player);
}