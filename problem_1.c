#include <stdio.h>

int main(){
  int a;    
  scanf("%d", &a);

  char c[32];
  int i;

  // Convert to character array
  for(i = 0; i != 32; i++) {
    c[31-i] = '0' + ("%d",a - (a >> 1 << 1));
    a = a >> 1;
  }
  
  // Print character array
  for(i = 0 ; i != 32; i++)
    printf("%c", c[i]);
  
  return 1;
}