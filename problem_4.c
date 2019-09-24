#include <stdio.h>

void main(){
  int a;
  scanf("%d", &a);

  int b = 0;

  int i;
  int l = 0;
  int r = 1;

  for(i = 2; i <= a; i++){
    if(i%2 == 0)
      l = l + r;
    else
      r = l + r;
  }

  if (a % 2 == 0)
    b = l;
  else b = r;
  printf("%d", b);
}