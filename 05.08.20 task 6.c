
#include  <stdio.h>

int main() {
	
	int usersNumber;
	
	printf("Write integer number:");
	scanf("%d", &usersNumber);
	
	usersNumber /= 10;
	usersNumber %= 10;
	
	printf("%d", usersNumber);

	return 0;
}