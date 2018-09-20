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
  printf("Values in the first array:\n");
  for(int x=0; x<10; x++){
    printf("%d: %d\n", x, ary[x]);
  }

  int ary1 [10];
  int *aryp = &ary;
  int *ary1p = &ary1;
  for (int x=0; x<10; x++){
    *(ary1p+x) = *(aryp + 9 - x);
  }
  printf("Values in the second array:\n");
  for(int x=0; x<10; x++){
    printf("%d: %d\n", x, ary1[x]);
  }
}
