#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
  int ary [10];
  srand(time(NULL));
  for(int x=0; x<10; x++){
    ary[x] = rand();
  }
  ary[9] = 0;
  printf("Values in the array:\n");
  for(int x=0; x<10; x++){
    printf("%d: %d\n", x, ary[x]);
  }
}
