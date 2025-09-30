#include <stdio.h>

int main(){
  int value;
  scanf("%d", &value);
  while (value % 2 == 0){
    value /= 2;
  }
  printf("%d\n", value);
}
