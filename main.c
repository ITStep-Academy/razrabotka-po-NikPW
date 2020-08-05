
#include <stdio.h>
#include <locale.h>


int main()

{

	setlocale(LC_ALL, "RUSSIAN");
	printf("Введите число:\n");

	int Firstvol;
	
	scanf_s("%d", &Firstvol);

	printf("%d - Моё любимое число\n", Firstvol);


	return 0;

}