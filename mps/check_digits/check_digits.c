#include <stdio.h>
#include <stdlib.h>

int main(){

  int m, n;
  scanf("%d %d", &m, &n);
  getchar();

  for (int i = 0; i < m+n; ++i){
    printf("%c\n", getchar());
  }


  int first_num = 0;
  for (int i = 0; i < m; ++i){
    first_num = first_num*10 + (getchar() - '0');
    getchar();
  }

  int second_num = getchar() - '0';
  for (int i = 0; i < n; ++i){
    second_num = second_num*10 + (getchar() - '0');
    getchar();
  }


  printf("First Num: %d Second Num: %d\n", first_num, second_num);
  printf("Product: %d\n", first_num * second_num);

}
