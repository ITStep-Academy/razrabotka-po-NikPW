
#include <stdio.h>
#include <locale.h>


int main()

{

	setlocale(LC_ALL, "RUSSIAN");
	printf("������� �����:\n");

	int Firstvol;
	
	scanf_s("%d", &Firstvol);

	printf("%d - �� ������� �����\n", Firstvol);


	return 0;

}