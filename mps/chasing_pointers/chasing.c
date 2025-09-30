#include <stdio.h>
#include <stdlib.h>

int main(){
  int startingPointer;
  int sizeArray;
  scanf("%d", &startingPointer);
  scanf("%d", &sizeArray);

  int *arr = malloc(sizeof(int)*sizeArray);
  int index = startingPointer;
  int currentElement;


  while (scanf("%d", &currentElement) == 1){
    arr[index-startingPointer] = currentElement;
    index += 1;
  }
  index = startingPointer;

  int operation_count = 0;
  int status_chase = 1;


  while (operation_count < sizeArray){
    currentElement = arr[index - startingPointer];

    if (currentElement < 0){
      printf("%d\n", currentElement);
      status_chase = 0;
      break;
    }

    index = currentElement;
    operation_count += 1;

  }

  if (status_chase){
    printf("There was a cycle\n");
  }

  free(arr);

  return 0;


}
