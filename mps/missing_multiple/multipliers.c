#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, m;
  scanf("%d", &n);
  scanf("%d", &m);

  int *arr = malloc(n*sizeof(int));
  for (int i = 0; i<n; ++i){
    scanf("%d", &arr[i]);
  }

  int product = 1;
  int startline = 1;
  for (int i = 0; i<n; ++i){
    int start = i - m;
    int end = i + m;
    int count = 0;

    for (int j = 0; j<n; ++j){
      if (j<start || j>end){
        product *= arr[j];
        count++;
      }
    }

    if (count == 0){
      if (startline){
        printf("0");
        startline = 0;
      } else {
        printf(" 0");
      }
    } else {
      if (startline){
        printf("%d", product);
        startline = 0;
      } else {
        printf(" %d", product);
      }
    }

    count = 0;
    product = 1;

  }

  printf("\n");
  free(arr);
  return 0;

}
