#include <stdio.h>
#include <stdlib.h>
#include "include/LinkedList.h"


main() {
    int choice;
   do{
       printf("\nEnter your choice\n");
       printf("\n1.Push\n2.Display\n3.Append\n0.Exit\n");
       scanf("%d", &choice);
       switch(choice){
           case 0:
               printf("\nExecution Ended");
               break;
           case 1:
               push();
               break;
           case 2:
               display();
               break;
           case 3:
               append();
               break;
           default:
               printf("\n Wrong Option");
               break;
       }
   }while(choice != NULL);

}