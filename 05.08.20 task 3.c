
#include  <stdio.h>

int main() {
	
	int usersNumber, hours, minutes, seconds, intermediate;
	
	printf("Write seconds:");
	scanf("%d", &usersNumber);
	
	intermediate = usersNumber % 3600;
	hours = usersNumber / 3600;
	
	seconds = intermediate % 60;
	
	minutes = intermediate / 60;
	
	printf("%d:%d:%d", hours, minutes, seconds);
	
	return 0;
}