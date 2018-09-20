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
    * ap = rand();
    printf("The number at %p is %d \n", ap, * ap);
    ap++;
  }
  
  ap--;
  * ap = 0;

  int neway[10];
  int * newap = neway;
  
  while(ap >= ay){
    printf("array[%d] = %d \n", (int) ( ap -  ay), *ap);
    * newap = * ap;
    newap++;
    ap--;
  }
  
  ap++;
  newap--;

  while(newap >= neway){
    printf("array2[%d] = %d \n", (int) ( newap - neway), * newap);
    newap--;
  }
  
  return 0;
}
