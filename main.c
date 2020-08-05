// Домашнаяя работа Давлатова Фарруха от 03.08.20
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

// проверил кодировку в Notepad++, проблем с кирилицей нет

int main() {

	setlocale(LC_ALL, "RUSSIAN");

	/* объявляю все необходимые переменные здесь. Причина - можно использовать
	одни и те же переменные в разных задачах, сохраняя их относительную удобочитаемость
	Напишите, пожалуйста, в комментарии на майстате, если лучше каждую задачу писать на отдельных файлах.*/

	int usersNumberInteger;
	long long int usersNumberLongInteger;

	// создаю огромный массив переменных и констант для 8 задачи
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










	//  Первая задача

	printf("\t\tПервая задача");

	printf("\nВведите целое число:\n");
	scanf_s("%d", &usersNumberInteger);

	usersNumberInteger /= 10;		// делим число, чтобы отбросить последнюю цифру
	usersNumberInteger %= 10;		// получаем теперь уже последнюю цифру оставшегося числа

	printf("Вторая цифра в ведённом вами числе - %d", usersNumberInteger);










	//  Вторая задача

	printf("\n\n\n\t\tВторая задача");

	printf("\nВведите целое число:\n");
	scanf_s("%d", &usersNumberInteger);

	firstNumInteger = usersNumberInteger % 10;				// получаем последнюю цифру
	secondNumInteger = usersNumberInteger / 10 % 10;		// получаем вторую цифру
	thirdNumInteger = usersNumberInteger / 100 % 10;		// получаем третью цифру

	result = firstNumInteger + secondNumInteger * 10 + thirdNumInteger * 100;		// получаем число из последних трёх цифр числа

	printf("Число, состоящее из 3 последних цифр введёного вами числа - %d", result);










	//  Третья задача

	printf("\n\n\n\t\tТретья задача");

	printf("\nВведите целое трёхзначное число:\n");
	scanf_s("%d", &usersNumberInteger);

	firstNumInteger = usersNumberInteger % 10;				// получаем последнюю цифру
	secondNumInteger = usersNumberInteger / 10 % 10;		// получаем вторую цифру
	thirdNumInteger = usersNumberInteger / 100 % 10;		// получаем третью цифру

	result = firstNumInteger * 100 + secondNumInteger * 10 + thirdNumInteger;		// умножаем в обратном порядке

	printf("Ваше перевёрнутое число - %d", result);










	//  Четвёртая задача

	printf("\n\n\n\t\tЧетвёртая задача");

	printf("\nСколько часов работал ваш смартфон без выключений?\n");
	scanf_s("%d", &usersNumberInteger);

	weeksPassed = usersNumberInteger / HOURS_IN_WEEK;				// получаем количество недель
	firstNumInteger = usersNumberInteger % HOURS_IN_WEEK;			// получаем остаток часов

	daysPassed = firstNumInteger / HOURS_IN_DAY;					// получаем количество дней
	hoursPassed = firstNumInteger % HOURS_IN_DAY;					// получаем остаток часов

	printf("Это же %d неделя, %d дней и %d часов!", weeksPassed, daysPassed, hoursPassed);










	//  Пятая задача

	printf("\n\n\n\t\tПятая задача");

	printf("\nВведите время через пробелы (пример - 16 02 52):\n");
	scanf_s("%d%d%d", &hours, &minutes, &seconds);

	hours *= SECONDS_IN_HOUR;													// переводим часы в секунды
	minutes *= SECONDS_IN_MINUTE;												// переводим минуты в секунды

	seconds += hours + minutes;													// считаем общее количество секунд

	printf("Вот введённое вами время в секундах - %d", seconds);










	//  Шестая задача

	printf("\n\n\n\t\tШестая задача");

	printf("\nВведите время в секундах:\n");
	scanf_s("%lld", &usersNumberLongInteger);

	daysPassed = usersNumberLongInteger / SECONDS_IN_DAY;						// получаем количество дней в указанном числе секунд
	firstNumInteger = usersNumberLongInteger % SECONDS_IN_DAY;					// получаем остаток секунд

	hoursPassed = firstNumInteger / SECONDS_IN_HOUR;							// получаем количество часов
	secondNumInteger = firstNumInteger % SECONDS_IN_HOUR;						// получаем остаток секунд

	minutes = secondNumInteger / SECONDS_IN_MINUTE;								// получаем минуты
	seconds = secondNumInteger % SECONDS_IN_MINUTE;								// получаем остаток секунд

	printf("%lld = %d дней, %d:%d:%d", usersNumberLongInteger, daysPassed, hoursPassed, minutes, seconds);










	//  Седьмая задача

	printf("\n\n\n\t\tСедьмая задача");

	printf("\nВведите 4 свои оценки через пробел:\n");
	scanf_s("%d%d%d%d", &markOne, &markTwo, &markThree, &markFour);

	average = markOne + markTwo + markThree + markFour;
	average /= 4;

	printf("Ваша средняя оценка - %.1f", average);










	//	Восьмая задача

	//	Очень сложная задача. Не видел другого способа выводить монеты вместо центов кроме циклов while. Прошу не оценивать строго
	//  Другие вряд-ли будут делать эту задачу. Если что считайте, что я её тоже не решал

	printf("\n\n\n\t\tВосьмая задача");

	// находим стоимость товаров в долларах с центами
	printf("\nВведите стоимость товаров, которые хочет купить покупатель по схеме доллары центы (максимум 3):\n");
	scanf_s("%d%d", &buyedStuffDollars1, &buyedStuffCents1);
	scanf_s("%d%d", &buyedStuffDollars2, &buyedStuffCents2);
	scanf_s("%d%d", &buyedStuffDollars3, &buyedStuffCents3);

	// находим общую стоимость товаров
	costDollars = buyedStuffDollars1 + buyedStuffDollars2 + buyedStuffDollars3;
	costCents = buyedStuffCents1 + buyedStuffCents2 + buyedStuffCents3;

	// переводим излишние центы в доллары
	while (costCents >= 100) {

		costCents -= 100;
		costDollars++;

	}

	// выясняем, сколько денег дал клиент
	printf("Введите сумму, которую дал клиент (доллары центы):\n");
	scanf_s("%d%d", &usersDollars, &usersCents);

	// выясняем, сколько надо дать сдачи
	changeDollars = usersDollars - costDollars;
	changeCents = usersCents - costCents;

	// обратный перевод долларов в центы в случае, 
	// если по той или иной причине количество центов стало отрицательным
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

	printf("Сдача клиенту - %d долларов, %d монет по 25 центов, %d монет по 10 центов, "
		"%d по 5 центов и %d по 1 центу", changeDollars, numOfCoin4, numOfCoin3, numOfCoin2, numOfCoin1);










//	Девятая задача

	int xInteger, roundedX;
	double X, xWithoutFloatDot;

	printf("\nВведите дробное число:\n");
	scanf_s("%lf", &X);

	xInteger = (int) X;

	roundedX = round(X);

	xWithoutFloatDot = xInteger - X;

	printf("%d - пункт a, %d - пункт b, %lf - пукнт c", xInteger, roundedX, xWithoutFloatDot);

	_getch();
	return 0;
}