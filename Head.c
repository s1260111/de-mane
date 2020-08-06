#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
  int i;
  int n;
  int s=0,t=0;

  printf("Tossing a coin...\n");

  srand(time(NULL));
  int c[3]={rand(),rand(),rand()};

  for(i=0;i<3;i++){
    if(c[i]%2==0) { printf("Round %d:Heads\n",i+1);
      s++;
    } else if(c[i]%2==1) {
      printf("Round %d:Tails\n",i+1);
      t++;
    }
  }

  printf("Heads: %d,Tails:%d\n",s,t);

  return 0;
}
