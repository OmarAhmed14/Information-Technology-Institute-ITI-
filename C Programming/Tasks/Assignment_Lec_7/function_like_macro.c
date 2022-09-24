#include <stdio.h>
#define set_bit(var,bit)  var |=(1<<bit)
#define clear_bit(var,bit)  var &= ~(1<<bit)
#define toggle_bit(var,bit)  var ^=(1<<bit)

void main()
{
	unsigned char x = 0b11010011;   // x = 211
	set_bit (x,2);
	printf("\nX = %d\n",x);  // x = 0b11010111

	clear_bit (x,0);
	printf("\nX = %d\n",x);  // x = 0b11010110

	toggle_bit (x,7);
	printf("\nX = %d\n",x);  // x = 0b01010110
}
