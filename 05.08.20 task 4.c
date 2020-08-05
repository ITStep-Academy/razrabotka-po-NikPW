
#include  <stdio.h>

int main() {
	
	int firstInt, secondInt, intermediate;
	
	printf("Write 2 numbers using spac between them:");
	scanf("%d%d", &firstInt, &secondInt);
	
	intermediate = firstInt;
	firstInt = secondInt;
	secondInt = intedmediate;
	
	printf("%d:%d", firstInt, secondInt);
	
	return 0;
}