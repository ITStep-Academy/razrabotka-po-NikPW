
#include  <stdio.h>

int main() {
	
	int a, b;
	
	printf("Write integer number:");
	scanf("%d%d", &a, &b);
	
	a = a - b;			
	b = b + a;			
	a = b - a;			
	
	printf("%d", usersNumber);

	return 0;
}