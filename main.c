#include<stdio.h>

int main (void) {

  //Variables
  int m=0;
  int z=0;
  int r;
  
  printf("\n|||--- Welcome to the Multiplication app ---|||\n\n");
  printf("Please enter your first number followed by the return key: ");
  scanf("%i",&m);
  printf("\n\nPlease enter your second number followed by the return key: ");
  scanf("%i",&z);
  r = m * z;
  printf("\n Here is your result: %d\n\n Thank you for using the multiplication app\n\n", r);
	return 0;
}