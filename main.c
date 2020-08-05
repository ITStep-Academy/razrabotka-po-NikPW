// ��������� ������ ��������� ������� �� 03.08.20
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

// �������� ��������� � Notepad++, ������� � ��������� ���

int main() {

	setlocale(LC_ALL, "RUSSIAN");

	/* �������� ��� ����������� ���������� �����. ������� - ����� ������������
	���� � �� �� ���������� � ������ �������, �������� �� ������������� ���������������
	��������, ����������, � ����������� �� ��������, ���� ����� ������ ������ ������ �� ��������� ������.*/

	int usersNumberInteger;
	long long int usersNumberLongInteger;

	// ������ �������� ������ ���������� � �������� ��� 8 ������
	int usersDollars, usersCents, changeDollars, changeCents, costDollars, costCents;
	int buyedStuffDollars1, buyedStuffDollars2, buyedStuffDollars3, buyedStuffCents1, buyedStuffCents2, buyedStuffCents3;
	int numOfCoin1 = 0, numOfCoin2 = 0, numOfCoin3 = 0, numOfCoin4 = 0;
	int coinsA, coinsB, coinsC;

	int markOne, markTwo, markThree, markFour;
	float average;

	int firstNumInteger, secondNumInteger, thirdNumInteger;

	int weeksPassed, daysPassed, hoursPassed;

	int result;

	int hours, minutes;
	long long int seconds;

	const int SECONDS_IN_DAY = 86400;
	const int SECONDS_IN_HOUR = 3600;
	const int SECONDS_IN_MINUTE = 60;

	const int HOURS_IN_WEEK = 168;
	const int HOURS_IN_DAY = 24;










	//  ������ ������

	printf("\t\t������ ������");

	printf("\n������� ����� �����:\n");
	scanf_s("%d", &usersNumberInteger);

	usersNumberInteger /= 10;		// ����� �����, ����� ��������� ��������� �����
	usersNumberInteger %= 10;		// �������� ������ ��� ��������� ����� ����������� �����

	printf("������ ����� � ������� ���� ����� - %d", usersNumberInteger);










	//  ������ ������

	printf("\n\n\n\t\t������ ������");

	printf("\n������� ����� �����:\n");
	scanf_s("%d", &usersNumberInteger);

	firstNumInteger = usersNumberInteger % 10;				// �������� ��������� �����
	secondNumInteger = usersNumberInteger / 10 % 10;		// �������� ������ �����
	thirdNumInteger = usersNumberInteger / 100 % 10;		// �������� ������ �����

	result = firstNumInteger + secondNumInteger * 10 + thirdNumInteger * 100;		// �������� ����� �� ��������� ��� ���� �����

	printf("�����, ��������� �� 3 ��������� ���� �������� ���� ����� - %d", result);










	//  ������ ������

	printf("\n\n\n\t\t������ ������");

	printf("\n������� ����� ���������� �����:\n");
	scanf_s("%d", &usersNumberInteger);

	firstNumInteger = usersNumberInteger % 10;				// �������� ��������� �����
	secondNumInteger = usersNumberInteger / 10 % 10;		// �������� ������ �����
	thirdNumInteger = usersNumberInteger / 100 % 10;		// �������� ������ �����

	result = firstNumInteger * 100 + secondNumInteger * 10 + thirdNumInteger;		// �������� � �������� �������

	printf("���� ����������� ����� - %d", result);










	//  �������� ������

	printf("\n\n\n\t\t�������� ������");

	printf("\n������� ����� ������� ��� �������� ��� ����������?\n");
	scanf_s("%d", &usersNumberInteger);

	weeksPassed = usersNumberInteger / HOURS_IN_WEEK;				// �������� ���������� ������
	firstNumInteger = usersNumberInteger % HOURS_IN_WEEK;			// �������� ������� �����

	daysPassed = firstNumInteger / HOURS_IN_DAY;					// �������� ���������� ����
	hoursPassed = firstNumInteger % HOURS_IN_DAY;					// �������� ������� �����

	printf("��� �� %d ������, %d ���� � %d �����!", weeksPassed, daysPassed, hoursPassed);










	//  ����� ������

	printf("\n\n\n\t\t����� ������");

	printf("\n������� ����� ����� ������� (������ - 16 02 52):\n");
	scanf_s("%d%d%d", &hours, &minutes, &seconds);

	hours *= SECONDS_IN_HOUR;													// ��������� ���� � �������
	minutes *= SECONDS_IN_MINUTE;												// ��������� ������ � �������

	seconds += hours + minutes;													// ������� ����� ���������� ������

	printf("��� �������� ���� ����� � �������� - %d", seconds);










	//  ������ ������

	printf("\n\n\n\t\t������ ������");

	printf("\n������� ����� � ��������:\n");
	scanf_s("%lld", &usersNumberLongInteger);

	daysPassed = usersNumberLongInteger / SECONDS_IN_DAY;						// �������� ���������� ���� � ��������� ����� ������
	firstNumInteger = usersNumberLongInteger % SECONDS_IN_DAY;					// �������� ������� ������

	hoursPassed = firstNumInteger / SECONDS_IN_HOUR;							// �������� ���������� �����
	secondNumInteger = firstNumInteger % SECONDS_IN_HOUR;						// �������� ������� ������

	minutes = secondNumInteger / SECONDS_IN_MINUTE;								// �������� ������
	seconds = secondNumInteger % SECONDS_IN_MINUTE;								// �������� ������� ������

	printf("%lld = %d ����, %d:%d:%d", usersNumberLongInteger, daysPassed, hoursPassed, minutes, seconds);










	//  ������� ������

	printf("\n\n\n\t\t������� ������");

	printf("\n������� 4 ���� ������ ����� ������:\n");
	scanf_s("%d%d%d%d", &markOne, &markTwo, &markThree, &markFour);

	average = markOne + markTwo + markThree + markFour;
	average /= 4;

	printf("���� ������� ������ - %.1f", average);










	//	������� ������

	//	����� ������� ������. �� ����� ������� ������� �������� ������ ������ ������ ����� ������ while. ����� �� ��������� ������
	//  ������ ����-�� ����� ������ ��� ������. ���� ��� ��������, ��� � � ���� �� �����

	printf("\n\n\n\t\t������� ������");

	// ������� ��������� ������� � �������� � �������
	printf("\n������� ��������� �������, ������� ����� ������ ���������� �� ����� ������� ����� (�������� 3):\n");
	scanf_s("%d%d", &buyedStuffDollars1, &buyedStuffCents1);
	scanf_s("%d%d", &buyedStuffDollars2, &buyedStuffCents2);
	scanf_s("%d%d", &buyedStuffDollars3, &buyedStuffCents3);

	// ������� ����� ��������� �������
	costDollars = buyedStuffDollars1 + buyedStuffDollars2 + buyedStuffDollars3;
	costCents = buyedStuffCents1 + buyedStuffCents2 + buyedStuffCents3;

	// ��������� �������� ����� � �������
	while (costCents >= 100) {

		costCents -= 100;
		costDollars++;

	}

	// ��������, ������� ����� ��� ������
	printf("������� �����, ������� ��� ������ (������� �����):\n");
	scanf_s("%d%d", &usersDollars, &usersCents);

	// ��������, ������� ���� ���� �����
	changeDollars = usersDollars - costDollars;
	changeCents = usersCents - costCents;

	// �������� ������� �������� � ����� � ������, 
	// ���� �� ��� ��� ���� ������� ���������� ������ ����� �������������
	if (changeCents < 0) {

		changeDollars--;
		changeCents += 100;

	}

	coinsA = changeCents % 25;
	numOfCoin4 = changeCents / 25;

	coinsB = coinsA % 10;
	numOfCoin3 = coinsA / 10;

	numOfCoin1 = coinsB % 5;

	numOfCoin2 = coinsB / 5;

	printf("����� ������� - %d ��������, %d ����� �� 25 ������, %d ����� �� 10 ������, "
		"%d �� 5 ������ � %d �� 1 �����", changeDollars, numOfCoin4, numOfCoin3, numOfCoin2, numOfCoin1);










//	������� ������

	int xInteger, roundedX;
	double X, xWithoutFloatDot;

	printf("\n������� ������� �����:\n");
	scanf_s("%lf", &X);

	xInteger = (int) X;

	roundedX = round(X);

	xWithoutFloatDot = xInteger - X;

	printf("%d - ����� a, %d - ����� b, %lf - ����� c", xInteger, roundedX, xWithoutFloatDot);

	_getch();
	return 0;
}