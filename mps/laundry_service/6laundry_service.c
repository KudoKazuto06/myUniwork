#include <stdio.h>
#include <stdlib.h>

int main() {

  int n, m, k;
  scanf("%d %d %d", &n, &m, &k);

  int *myMachine = malloc(m*sizeof(int));
  int *myLoad = malloc(m*sizeof(int));
  for (int i = 0; i < m; ++i){
    scanf("%d", &myMachine[i]);
    myLoad[i] = 0;
  }

  int choice = 0;
  int slowest = 0;
  for (int i = 0; i < n; ++i){
    choice = 0;
    slowest = myMachine[0]*(myLoad[0]+1);
    for (int j = 1; j < m; ++j){
      if (myMachine[j]*(myLoad[j]+1) < slowest){
	choice = j;
	slowest = myMachine[j]*(myLoad[j]+1);
      }
    }
    myLoad[choice]++;
  }

  int lowest = myMachine[0]*myLoad[0];
  for (int i = 1; i < m; ++i){
    if (myMachine[i]*myLoad[i] < lowest){
      lowest = myMachine[i]*myLoad[i];
    }
  }

  int result = slowest + k;
  printf("%d\n", result);
  free(myMachine);
  free(myLoad);
  return 0;
}
