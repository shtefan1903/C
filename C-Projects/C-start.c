#include <stdio.h>
#include <stdlib.h>
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int x = 23;
int y = 55;

int sum(int, int);
void print(int);

int main(void){
  int z;
  z = sum(x, y);
  print(z);


return EXIT_SUCCESS;
}

int sum(int x, int y){
return x + y;
}

void print(int x){
    printf("%d",x);
}

