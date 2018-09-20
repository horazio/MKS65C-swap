#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int etime = time(NULL);
  printf("Time seed is: %d \n\n", etime); 
  srand(etime);
  
  int ay[10];
  int * ap = ay;
  
  while(ap < ay + 10){
    *(ap) = rand();
    printf("The number at %p is %d", ap, * ap);
    ap++;
  }
  
  return 0;
}
