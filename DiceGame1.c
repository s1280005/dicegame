#include <stdio.h>
#include <stdlib.h>

int main(){
  int i,n,sum=0;
  char name[10];

  printf("What is your name?\n");
  scanf("%s",&name);
  printf("Hello,%s!\n",name);
  printf("Rolling the dice...\n");

  for(i=0;i<2;i++){
    n=rand()%6+1;
    printf("Die %d:%d\n",i,n);
    sum+=n;
  }

  printf("Total value:%d\n",sum);
}
