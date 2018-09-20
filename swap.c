#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int etime = time(NULL);
  printf("Time seed is: %d \n\n", etime); 
  srand(etime);
  

  return 0;
}
