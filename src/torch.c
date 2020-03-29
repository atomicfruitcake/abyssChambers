#include <stdio.h>

#include "object.h"

#include "misc.h"

int checkTorchInInventory() {
  if (inCurrentInventory(player, "torch")) {
    return 0;
  }
  return 1;
}

void executeLightTorch() {
  if (!checkTorchInInventory()) {
    printf("No torch found in your inventory, cannot light torch\n");
    return;
  }

  if (player -> location == witchesLair) {
	  torch -> lit = 0;
	  torch -> description = "A flaming torch allowing you to travel to darker places";
	  torch -> details = "The torch is alight, allowing you to venture to darker places";
	  printf("You have lit the torch. You can now venture into darker places");
	  return;
  }
  printf("Cannot light the torch here, there is no flame around");
}
