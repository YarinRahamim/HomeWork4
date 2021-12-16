#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/* ***1a***
void main()
{
	int i;
	int sum = 0;
	for (i = 15; i <= 1000; i += 15) {
		sum += i;
	}
	printf("The sum is: %d", sum);
}*/
/* ***1b***
void main() {
	int i;
	int sum = 0;
	for (i = 3; i <= 1000; i += 3) { // עוברים על כל המספרים מ-3 עד 1000 בקפיצות של 3 
		sum += i;// סוכמים את הכל ומוסיפים לסכום
		for (i = 5; i <= 1000; i += 5) { // עוברים על כל המספרים מ-5 עד 1000 בקפיצות של 5
			if (i % 3 != 0) { // בודקים האם המספרים לא מתחלקים ב-3 כדי למנוע כפילויות
				sum += i; // מוסיפים לסכום
			}
		}
	}
	printf("The sum is: %d", sum);
}*/

/* ***2***
void main()
{
	int n, num;
	int prev = 0;
	int flag = 1;
	printf("Enter number: ");
	scanf("%d", &n);
	if (n <= 0)
		printf("Invalid input"); //  אם המספר הספרות בסדרה שהכנסת קטן מ-0 תודפס שגיאה 
	else {
		do { // אחרת תכנס ללולאה
			printf("Enter a postive number: "); // בקשה מהמשתמש להכניס איבר
			scanf("%d", &num);
			if (num < 0) // אם האיבר שהמשתמש הכניס קטן מאפס תודפס שגיאה של מספר שלילי
				printf("Negative number");
			else
			{
				if (num <= prev) { // אחרת מידה והמספר שהכנסת קטן או שווה למספר הקודם, הדגל יהיה 0 ונסיים את הלולאה מכיוון שהסדרה לא עולה ממש
					flag = 0;
					break;
				}
				prev = num; // אחרת אם המספר שהכנסת גדול מהקודם, נאתחל את הקודם להיות המספר הנוכחי ונקטין את הסדרה ב-1 מכיוון שהכנסת איבר
				n--;
			}
		} while (n != 0); 
		if (flag == 0) // כאשר הדגל 0 תודפס הסדרה לא עולה ממש
			printf("Not very ascending");
		else
			printf("Very ascending"); // אחרת הדגל נשאר על 1 ותודפס שהסדרה עולה ממש

	}
} */

/* ***3***
void main()
{
	int n;
	int sumEven = 0;
	int sumOdd = 0;
	int digit = 0;
	printf("Enter number: ");
	scanf("%d", &n);
	while (n > 0) { // כאשר המספר שהוכנס גדול מ-0 נכנס ללולאה
		digit = n % 10; // ניצור משתנה שמוציא מהמספר שהוכנס את ספרת האחדות שלו
		n /= 10; // לאחר מכן נחלק את המספר ב-10
		if (digit % 2 == 0) { // אם הספרה זוגית- מודולו 2 שווה לאפס
			sumEven += digit; //  נוסיף את כל פעם את הספרה הזוגית לתוך הסכום של המספרים הזוגיים
		}
		else
		{
			sumOdd += digit; // אחרת הספרה היא אי זוגית ונוסיף אותה לסכום הספרות האי זוגיות
		}
	}
	printf("The sum is: %d", sumEven - sumOdd); // נדפיס את החיסור בינהם
}*/

/* ***4a***
void main()
{
	int n = 0;
	int mult = 1;
	int digit;
	printf("Enter digit: ");
	scanf("%d", &digit);

	while (digit == 0 || digit == 1) {
		n += digit * mult;
		mult *= 2;
		printf("Enter digit: ");
		scanf("%d", &digit);
	}
	printf("Number is: %d", n); 
}*/

/* ***4b***
void main()
{
	int num = 0;
	int digit;
	printf("Enter digit: ");
	scanf("%d", &digit);
	while (digit == 0 || digit == 1)
	{
		num *= 2;
		num += digit;
		printf("Enter digit: ");
		scanf("%d", &digit); // על פי כלל הוכנר

	}
	printf("Number: %d", num);
}*/

/* ***5***
void main()
{
	int i;
	int digit1;
	int digit2;
	int digit3;
	for (digit1 = 0; digit1 <= 7; digit1++) {
		for(digit2 = digit1+1; digit2 <=8; digit2++){
			digit3 = digit2 + 1;
			printf("%d, %d, %d\n", digit1, digit2, digit3);
		}
	}
}*/

/* ***1***
void main()
{
	int n;
	int i;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		if (i % 15 == 0) 
			printf("FizzBuzz, ");
		else if (i % 5 == 0)
			printf("Buzz, ");
		else if (i % 3 == 0)
			printf("Fizz, ");
		else
			printf("%d, ", i);
	}
}*/

/* ***2***
void main()
{
	double x;
	double i = 25;
	double j = 0;
	int part = 1;
	printf("Enter x: ");
	scanf("%lf", &x);
	while (i <= 1000)
	{
		if (x >= j && x < i)
			printf("x in part: %d", part);
		j += 25;
		i += 25;
		part++;
	}
}*/

/* ***3***
void main()
{
	int n;
	int bill;
	int coin1;
	int coin2;
	int coin5;
	int coin10;

	printf("Enter number of money in NIS: ");
	scanf("%d", &n);

	if (n <= 0)
		printf("Invalid input");

	else {
		while (n != 0) {

			bill = n / 20;
			printf("%d, 20NIS\n", bill);

			coin10 = (n - bill * 20) / 10;
			printf("%d, 10NIS\n", coin10);

			coin5 = (n - bill * 20 - coin10 * 10) / 5;
			printf("%d, 5NIS\n", coin5);

			coin2 = (n - bill * 20 - coin10 * 10 - coin5 * 5) / 2;
			printf("%d, 2NIS\n", coin2);

			coin1 = (n - bill * 20 - coin10 * 10 - coin5 * 5 - coin2 * 2) / 1;
			printf("%d, 1NIS\n", coin1); 

			n *= 0;
		}
	}
}*/

/* ***4***
void main()
{
	int n;
	int sum = 0;
	printf("Enter Number: ");
	scanf("%d", &n);
		while (n >= 1) {
			if(n % 2 != 0 && n % 3 != 0){
			sum += n;
			printf("The sum is: %d\n", sum);
			printf("Enter Number: ");
			scanf("%d", &n);
		}
			else
			{
				printf("Invalid Input");
				break;
			}
	}
}*/

/***5***
void main()
{
	int n;
	printf("Enter a number n: \n");
	scanf("%d", &n);
	int i;
	int result1 = 1;
	int result2 = 1;
	if (n == 0)
	{
		printf("Err! change the number! not posiible divide in 0!\n");
	}
	else if (n == 1)
	{
		printf("The result is: 1\n");
	}
	else
	{
		for (i = 2; i <= n; i++)
		{
			result1 = result1 * i;
		}
		result2 = (n - 1) + n;
		double sum = (double)result1 / result2;
		printf("The result is: %.2lf\n", sum);
	}

}*/

/* ***6***
void main()
{
	int num, min, max;
	int count = 0;
	printf("Enter series of number, finish with -1: ");
	scanf("%d", &num);
	min = max = num;
	while (num != -1)
	{
		count++;
		if (num < min)
		{
			min = num;
		}
		else if (max < num)
		{
			max = num;
		}
		scanf("%d", &num);
	}
	if (count) {
		if (count == 1)
		{
			printf("one number, max = %d, min = %d\n", max, min);
		}
		else
		{
			printf("%d numbers, max = %d, min = %d\n", count, max, min);
		}
	}
		else
		{
			printf("0 numbers, no max nor min\n");
		}
}*/

/* ***7***
void main()
{
	int n, temp = 1;
	printf("Please enter a number: ");
	scanf("%d", &n);
	while (temp * 2 <= n)
		temp *= 2;
	while (temp) {
		if (n >= temp) {
			printf("1");
			n -= temp;
		}
		else
			printf("0");
		temp /= 2;
	}
}*/

/* ***8 ***
void  main()
{
	double a1, q;
	int n,i;
	printf("Enter a1 number of the sequence: \n");
	scanf("%lf", &a1);
	printf("Enter q number of the sequence: \n");
	scanf("%lf", &q);
	printf("Enter n(place) number of the sequence: \n");
	scanf("%d", &n);
	double an = a1;
	double S = 1;
	for (i = 1; i <= n - 1; i++) 
	{
		an = an * q; // an = a1 --> a1 * q^(n-1)
		S = S * q; // s = q^(n-1)
	}
	S = a1 * (S * q - 1) / (q - 1);
	printf("A%d= %.1lf, S= %.1lf", n, an, S);
}*/

/* ***9***
void main()
{
	int i, n;
	double S = 1;
	printf("Enter n number: \n");
	scanf("%d", &n);
	if (n % 2 == 0)
	{
		printf("***The number is even!*** illegal");
	}
	else
	{
		for (i = 2; i <= n - 1; i += 2)
		{
			S += (double)i / (i + 1);
		}
		printf("The sum is: %.2lf", S);
	}
}*/

/* ***10***
void main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	int min, max, posMin, posMax, pos = 0;
	
	if (n <= 0)
	{
		printf("Invalid input\n");
	}
	else
	{
		min = max = n % 10;
		posMin = posMax = 1;
		n = n / 10;
		pos++;
		while (n > 0)
		{
			if (n % 10 >= max)
			{
				max = n % 10;
				posMax = pos;
			}
			if (n % 10 <= min) 
			{
				min = n % 10;
				posMin = pos;
			}
			n = n / 10;
			pos++;
		}
		printf("Max = %d, at position: %d, Min = %d, at position: %d\n", max, posMax, min, posMin);
	}
}*/


/* ***11***
void main()
{
	int n, max, posMax, min, posMin, pos = 0;
	printf("Please enter a number: ");
	scanf("%d", &n);
	if (n <= 0)
		printf("Invalid number!\n");
	else {
		min = max = n % 10;
		posMax = posMin = 1;
		n /= 10;
		pos++;
		while (n) {
			if (n % 10 > max) {
				max = n % 10;
				posMax = pos;
			}
			if (n % 10 < min) {
				min = n % 10;
				posMin = pos;
			}
			n /= 10;
			pos++;
		}
		printf("Max = %d, at position: %d, Min = %d, at position: %d\n", max, posMax, min, posMin);
	}
}*/

/* ***12***
void main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	int sumEven, sumOdd;
	double sum = 0;

	if (n <= 0)
	{
		printf("Invalid input!\n");
	}

	else {
		sumEven = sumOdd = 1;
		while (n > 0)
		{
			if (n % 10 % 2 == 0)
			{
				sumEven *= n % 10;
			}
			else
			{
				sumOdd *= n % 10;

			}
			n /= 10;
		}
		sum = (double)sumEven / sumOdd;
		printf("The sum is: %.2lf", sum);
	}
}*/

/* ***13***
void main()
{
	int answer, guess, count = 0;
	srand(time(NULL));
	answer = rand() % 10 + 1;
	while (1)
	{
		count++;
		printf("Guss computer's number between 1 and 10: ");
		scanf("%d", &guess);
		if (guess == answer)
		{
			printf("%d is the corrent number! \n", guess);
			break;
		}
		else
		{
			printf("Sorry, %d is not the number, try again \n", guess);
		}
	}
		switch (count)
		{
		case 1:
			printf("i believe you have cheated...\n");
			break;
		case 2:
		case 3:
			printf("Excellent game!\n");
			break;
		case 4:
		case 5:
			printf("You played well!\n");
			break;
		case 6:
		case 7: 
			printf("Average game\n");
			break;
		case 8:
		case 9:
		case 10:
			printf("Poor game.\n");
			break;
		default:
			printf("Seriously? There are only then choices...\n");
		}
}*/
	
