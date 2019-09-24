#include <stdio.h>

int main() {
  signed short int a = 0; 
  
  char c1[10];
  char c2[10];   
  scanf("%s", c1);
  scanf("%s", c2);
  
  int i;
 
  //first string
  for(i = 0; i != 8; i++) {
    a = a << 1;  
    if (c1[i] == '1')
      a++; 
  }

  for(i = 0; i != 8; i++) {
    a = a << 1;  
    if (c2[i] == '1')
      a++; 
  }

  // print decimal
  printf("%hi", a);
  
  return 1;
}