// This version is for the stairs not with the first line displaying the current floor
// The actual assignment gives the first line as the number of meetings

#include <stdio.h>
#include <stdlib.h>

void readInput(){

  int meetings;
  scanf("%d", &meetings);

  int *myArray = malloc(meetings*sizeof(int));
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
      myArray[index] = c - '0';
      status_int = 1;
    }

  }

  int current = myArray[0];
  int total = 0;

  for (int i = 1; i<index+1; ++i){
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
