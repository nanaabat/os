#include <stdio.h>
//#include <stlib.h>
//#include <sys/time.h>
//#include <assert.h>


int main(){

  int var1;
  char var2[10];
  int var = 20;
  int *ip; /*pointer variable declaration*/

  ip = &var;

  printf("Address of var variable: %p\n", &var);
  printf("Address stored in ip variable: %p\n", ip);
  printf("Value of *ip variable: %d\n", *ip);
  printf("Address of var1 variable: %p\n", &var1);
  printf("Address of var2 variable: %p\n", &var2);

  return 0;
}
