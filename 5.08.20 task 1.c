
#include <stdio.h>
#include <conio.h>

int main () {
	
	int usersInteger, usersFloat;
	double usersNumber;
	
	printf("Введите дробное число:\n");
	scanf("%lf", &usersNumber);
	
	usersInteger = (int) usersNumber;
	usersFloat = usersNumber - usersInteger;
	
	printf("%d%.3lf", usersInteger, usersFloat);
	
	_getch();
	return 0;
}