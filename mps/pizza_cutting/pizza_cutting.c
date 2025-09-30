#include <stdio.h>

int main(){
  int base, slices;
  scanf("%d %d", &base, &slices);
  while (slices % base == 0){
    slices /= base;
  }
  if (slices == 1){
    printf("GOOD\n");
  } else {
    printf("BAD\n");
  }
  return 0;
}
