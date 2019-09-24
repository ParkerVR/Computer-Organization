#include <stdio.h>


int main(){
  signed int a = 0; 
  
  char c1[8];
  char c2[8];   
  scanf("%s", c1);
  scanf("%s", c2);
  
  int i;


  /*
  _Bool negative = c1[0] - '0';
  if (c1[0] == '1') {
    for(i = 0; i != 15; i++)
      b[i] = 1-b[i];
  }
  */

  //first string
  for(i = 1; i != 8; i++) {
    a = a << 1;  
    if (c1[i] = '1')
      a++; 
  }

  for(i = 0; i != 8; i++) {
    a = a << 1;  
    if (c2[i] = '1')
      a++; 
  }

  if(c1[0] == '1'){
    a = ~a;
    a = a*-1;
  }
  // print decimal
  printf("%d", a);
  
  return 1;
}