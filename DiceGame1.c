#include <stdio.h>
#include <stdlib.h>

int main(){
  int i,n,m,sum=0;
  char name[10];

  printf("What is your name?\n");
  scanf("%s",&name);
  printf("Hello,%s!\n",name);
  printf("Rolling the dice...\n");

  n=rand()%6+1;
  m=rand()%6+1;
  sum=n+m;
  printf("Die 1:%d\n",n);
  printf("Die 2:%d\n",m);

  if(sum>7)printf("%s won!\n",name);
  else printf("%s lost!\n",name);

  return 0;
}
