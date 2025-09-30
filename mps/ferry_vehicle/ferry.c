#include <stdio.h>
#include <stdlib.h>

int main(){

  int n, m;
  scanf("%d %d", &n, &m);

  int *myWest = malloc(n*sizeof(int));
  int *myEast = malloc(m*sizeof(int));

  for (int i = 0; i < n; ++i) scanf("%d", &myWest[i]);
  for (int i = 0; i < m; ++i) scanf("%d", &myEast[i]);

  int ferry_time = 0, current_e = 0, current_w = 0, location = 1;
  // if location = 1 - it is on the west side
  // if location = 0 - it is on the east side

  while (current_e < m || current_w < n) {

    int next_w = (current_w < n) ? myWest[current_w] : 1e9;
    int next_e = (current_e < m) ? myEast[current_e] : 1e9;

    // Determine the next vehicle to serve
    if (next_w <= next_e){

      // next vehicle is on the west
      if (ferry_time < next_w) ferry_time = next_w;

      if (!location){
	ferry_time += 100;
	location = 1;
      }

      ferry_time += 100;
      current_w++;
      location = 0;

    } else {

      // next vehicle is on the east
      if (ferry_time < next_e) ferry_time = next_e;

      if (location){
	//move to east
	ferry_time += 100;
	location = 0;
      }


      ferry_time += 100;
      current_e++;
      location = 1;

    }

  }

  printf("%d\n", ferry_time);

  free(myWest);
  free(myEast);

}
