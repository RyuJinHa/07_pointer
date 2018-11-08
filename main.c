#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void swap(int *x, int *y)
{
	int temp;
	
	temp=*x;
	*x=*y;
	*y=temp;
	
	return;
}
int main(int argc, char *argv[]) {
	
	int x=19;
	int y=29;
	
	printf("x=%i, y=%i\n", x, y);
	swap(&x, &y);
	printf("x=%i, y=%i", x, y);
	
	

	return 0;
}
