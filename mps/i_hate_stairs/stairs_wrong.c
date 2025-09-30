// This version is for the stairs not with the first line displaying the current floor
// The actual assignment gives the first line as the number of meetings

#include <stdio.h>
#include <stdlib.h>

void readInput(){

  int current;
  scanf("%d", &current);

  int *myArray = malloc(4*sizeof(int));
  int myArrLen = 4;
  int index = -1;
  int status_int = 0;

  for (char c = getchar(); c != EOF; c = getchar()){

    if (status_int && (c == ' ' || c == '\t' || c == '\n')){
      status_int = 0;
    } else if (status_int) {
      myArray[index] = myArray[index]*10 + (c - '0');
      continue;
    }

    if (c >= '0' && c <= '9' && status_int == 0){
      index += 1;
      if (myArrLen == index+1){
        myArrLen *= 2;
	myArray = realloc(myArray, myArrLen*sizeof(int));
      }
      myArray[index] = c - '0';
      status_int = 1;
    }
  }

  printf("Current: %d\n", current);

  int total = 0;
  for (int i = 0; i<index+1; ++i){
    printf("Index %d: %d\n", i, myArray[i]);
    if (current < myArray[i]){
      total += (myArray[i] - current);
    }
    current = myArray[i];
  }
  printf("%d\n", total);
  free(myArray);

}


int main(){
  readInput();
  return 0;
}
