
#include  <stdio.h>

int main() {
	
	int usersNumber, result;
	
	printf("Write integer number:");
	scanf("%d", &usersNumber);
	
	result = usersNumber % 10;
	
	printf("%d", result);
	
	return 0;
}