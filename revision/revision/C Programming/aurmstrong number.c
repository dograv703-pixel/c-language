#include <stdio.h>
int main() {
  int n, x, y, z;
  for(n=100; n<1000; n++){ 
    x = n/100;
    y = (n/10)%10;
    z = n%10;
    if(n == x*x*x + y*y*y + z*z*z)
      printf("%d\n", n);
  }
  return 0;
}