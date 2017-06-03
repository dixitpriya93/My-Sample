#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b, c;
	int d = 0;
	while(d < 5) {
	printf("Enter your numbers \n");
	scanf("%d, %d", &a, &b);
	c = a + b;
	printf("sum is %d \n", c);
	d++;
	}
	return 0;
}