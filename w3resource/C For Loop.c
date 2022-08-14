#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	// 1
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", i + 1);
	}
	printf("\n\n");

	// 2
	int sum = 0;
	printf("The first 10 natural number is :\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", i + 1);
		sum += i + 1;
	}
	printf("\n");
	printf("The Sum is : %d\n\n", sum);

	// 3
	int n;
	sum = 0;
	printf("1부터 n까지의 합을 구하기 위한 n을 입력하라\n");
	scanf_s("%d", &n);
	printf("The first %d natural number is :\n", n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", i + 1);
		sum += i + 1;
	}
	printf("\n");
	printf("The Sum of Natural Number upto %d terms : %d\n\n", n, sum);

	// 4
	sum = 0;
	printf("Input the 10 numbers :\n");
	for (int i = 0; i < 10; i++)
	{
		printf("Number-%d : ", i + 1);
		scanf_s("%d", &n);
		sum += n;
	}
	printf("The sum of 10 no is : %d\n", sum);
	printf("The Average is : %f\n\n", (double)sum / 10);

	// 5
	printf("1부터 n까지 세제곱할 n을 입력하라\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Number is : %d and cube of the %d is :%d\n", i + 1, i + 1, (i + 1) * (i + 1) * (i + 1));
	}
	printf("\n");

	// 6
	printf("1부터 10까지 숫자와의 곱을 출력할 정수 n을 입력하라\n");
	scanf_s("%d", &n);
	for (int i = 0; i < 10; i++)
	{
		printf("%d X %d = %d\n", n, i + 1, n * (i + 1));
	}
	printf("\n");

	// 7
	printf("Input upto the table number starting from 1 : ");
	scanf_s("%d", &n);
	printf("Multiplication table from 1 to %d\n", n);
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d X %d = %d  ", j + 1, i + 1, (j + 1) * (i + 1));
		}
		printf("\n");
	}
	printf("\n");

	// 8
	sum = 0;
	printf("Input number of terms : ");
	scanf_s("%d", &n);
	printf("The odd numbers are :");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", 2 * i + 1);
		sum += 2 * i + 1;
	}
	printf("\nThe Sum of odd Natural Number upto 10 terms : %d\n\n", sum);

	// 9
	printf("별을 몇 층으로 그릴 것인가\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
	printf("\n");

	// 10
	printf("정수를 입력하라\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			printf("%d", j + 1);
		printf("\n");
	}
	printf("\n");

	// 11
	printf("정수를 입력하라\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			printf("%d", i + 1);
		printf("\n");
	}
	printf("\n");

	// 12
	int count = 1;
	printf("정수를 입력하라\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			printf("%d ", count++);
		printf("\n");
	}
	printf("\n");

	// 13
	count = 1;
	printf("정수를 입력하라\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
			printf(" ");
		for (int j = 0; j <= i; j++)
			printf("%d ", count++);
		printf("\n");
	}
	printf("\n");

	// 14
	printf("정수를 입력하라\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
			printf(" ");
		for (int j = 0; j <= i; j++)
			printf("* ");
		printf("\n");
	}
	printf("\n");

	// 15
	int factorial = 1;
	printf("Input the number : ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		factorial *= i + 1;
	}
	printf("The Factorial of %d is: %d\n\n", n, factorial);

	// 16
	sum = 0;
	printf("Input number of terms : ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", 2 * (i + 1));
		sum += 2 * (i + 1);
	}
	printf("\nThe Sum of even Natural Number upto %d terms : %d\n\n", n, sum);

	// 17
	count = 1;
	printf("정수를 입력하라\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
			printf(" ");
		for (int j = 0; j <= i; j++)
			printf("%d ", i + 1);
		printf("\n");
	}
	printf("\n");

	// 18
	double x;
	double term = 1.0;
	printf("Input the Value of x :");
	scanf_s("%lf", &x);
	printf("Input the number of terms : ");
	scanf_s("%d", &n);
	double sum_d = 1.0;
	for (int i = 1; i < n; i++)
	{
		term *= (-1) * x * x / ((2 * i - 1) * (2 * i));
		sum_d += term;
	}
	printf("the sum = %f\n", sum_d);
	printf("Number of terms = %d\n", n);
	printf("value of x = %f\n\n", x);

	// 19
	printf("Input the number of terms : ");
	scanf_s("%d", &n);
	sum_d = 0;
	for (int i = 0; i < n; i++)
	{
		printf("1/%d + ", i + 1);
		sum_d += (double)1 / (i + 1);
	}
	printf("\nSum of Series upto %d terms : %f\n\n", n, sum_d);

	// 20
	printf("정수를 입력하라\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n - 1; j++)
			printf(" ");
		for (int j = 0; j <= 2 * i; j++)
			printf("*");
		printf("\n");
	}
	printf("\n");

	// 21
	int term_int = 0;
	sum = 0;
	printf("Input the number of terms :");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		term_int = term_int * 10 + 9;
		printf("%d ", term_int);
		sum += term_int;
	}
	printf("\nThe sum of the series = %d\n\n", sum);

	// 22
	printf("정수를 입력하라\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		if (!(i % 2))
		{
			for (int j = 0; j <= i; j++)
			{
				if (!(j % 2)) printf("1");
				else printf("0");
			}
		}
		else
		{
			for (int j = 0; j <= i; j++)
			{
				if (!(j % 2)) printf("0");
				else printf("1");
			}
		}
		printf("\n");
	}
	printf("\n");

	// 23
	printf("Input the value of x :");
	scanf_s("%lf", &x);
	printf("Input number of terms : ");
	scanf_s("%d", &n);
	term = 1.0;
	sum_d = 1.0;
	for (int i = 1; i < n; i++)
	{
		term *= x / i;
		sum_d += term;
	}
	printf("The sum is %f\n\n", sum_d);

	// 24
	int x_int;
	printf("Input the value of x :");
	scanf_s("%d", &x_int);
	printf("Input number of terms : ");
	scanf_s("%d", &n);
	term_int = x_int;
	sum = 0;
	printf("%d\n", term_int);
	sum += term_int;
	for (int i = 1; i < n; i++)
	{
		term_int *= (-1) * x_int * x_int;
		printf("%d\n", term_int);
		sum += term_int;
	}
	printf("The sum = %d\n\n", sum);

	// 25
	printf("Input the number of terms : ");
	scanf_s("%d", &n);
	sum = 0;
	printf("The square natural upto %d terms are :", n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", (i + 1) * (i + 1));
		sum += (i + 1) * (i + 1);
	}
	printf("\nThe Sum of Square Natural Number upto %d terms = %d\n\n", n, sum);

	// 26
	term_int = 1;
	sum = 0;
	printf("Input the number of terms :");
	scanf_s("%d", &n);
	printf("%d ", term_int);
	sum += term_int;
	for (int i = 1; i < n; i++)
	{
		term_int = term_int * 10 + 1;
		printf("+ %d ", term_int);
		sum += term_int;
	}
	printf("\nThe sum of the series = %d\n\n", sum);

	// 27
	printf("Input the number : ");
	scanf_s("%d", &n);
	printf("The positive divisor : ");
	sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (!(n % i))
		{
			printf("%d ", i);
			sum += i;
		}
	}
	printf("\nThe sum of the divisor is : %d\n", sum);
	if (sum == n)
		printf("So, the number is perfect\n\n");
	else
		printf("So, the number is not perfect\n\n");

	// 28
	int n1, n2;
	printf("Input the strarting range of number : ");
	scanf_s("%d", &n1);
	printf("Input the ending range of number : ");
	scanf_s("%d", &n2);
	printf("The Perfect numbers within the given range : ");
	for (int i = n1; i <= n2; i++)
	{
		sum = 0;
		for (int j = 1; j < i; j++)
		{
			if (!(i % j))
			{
				sum += j;
			}
		}
		if (sum == i)
			printf("%d ", sum);
	}
	printf("\n\n");

	// 29
	printf("Input a number: ");
	scanf_s("%d", &n);
	sum = 0;
	term_int = n;
	while (1)
	{
		if (term_int / 10 == 0 && term_int % 10 == 0)
			break;
		else
			sum += (term_int % 10) * (term_int % 10) * (term_int % 10);
		term_int /= 10;
	}
	if (sum == n)
		printf("%d is an Armstrong number\n\n", n);
	else
		printf("%d is not an Armstrong number\n\n", n);

	// 30
	printf("Input the strarting range of number : ");
	scanf_s("%d", &n1);
	printf("Input the ending range of number : ");
	scanf_s("%d", &n2);
	printf("Armstrong numbers in given range are : ");
	for (int i = n1; i <= n2; i++)
	{
		sum = 0;
		term_int = i;
		while (1)
		{
			if (term_int / 10 == 0 && term_int % 10 == 0)
				break;
			else
				sum += (term_int % 10) * (term_int % 10) * (term_int % 10);
			term_int /= 10;
		}
		if (sum == i)
			printf("%d ", i);
	}
	printf("\n\n");

	// 31
	printf("다이아는 총 몇 층인가?(홀수 층만 가능)\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		if (i < (n + 1) / 2)
		{
			for (int j = 0; j < (n - 1) / 2 - i; j++)
				printf(" ");
			for (int j = 0; j < 2 * i + 1; j++)
				printf("*");
		}
		else
		{
			for (int j = 0; j < i - (n - 1) / 2; j++)
				printf(" ");
			for (int j = 0; j < 2 * (n - i) - 1; j++)
				printf("*");
		}
		printf("\n");
	}
	printf("\n");

	// 32
	printf("Input a number: ");
	scanf_s("%d", &n);
	if (n == 1)
		printf("%d is not a prime number\n\n", n);
	else if (n == 2)
		printf("%d is a prime number\n\n", n);
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			printf("%d is not a prime number\n\n", n);
			break;
		}
		if (i == n - 1)
			printf("%d is a prime number\n\n", n);
	}

	// 33 . 파스칼의 삼각형 공식 이항계수
	// 해당 자리 = n C r = n * (n - 1)...(n - r) / (r * ... * 1)
	// 왼쪽 = n C r-1 = n * ... (n - (r - 1)) / ((r - 1) * ... 1))
	printf("Input number of rows: ");
	scanf_s("%d", &n);
	int k;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
			printf(" ");
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
				k = 1;
			else
			{
				k *= i - j + 1;
				k /= j;
			}
			printf("%d ", k);
		}
		printf("\n");
	}
	printf("\n");

	// 34
	printf("Input strarting number of range:");
	scanf_s("%d", &n1);
	printf("Input strarting number of range:");
	scanf_s("%d", &n2);
	for (int i = n1; i <= n2; i++)
	{
		if (i == 2)
			printf("2 ");
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0) break;
			if (j == i - 1)
			{
				printf("%d ", i);
			}
		}
	}
	printf("\n\n");

	// 35
	printf("Input number of terms to deplay : ");
	scanf_s("%d", &n);
	int f = 0;
	n1 = 0;
	n2 = 0;
	while (n > 0)
	{
		if (f == 0)
		{
			printf("%d ", f++);
			n--;
		}
		else if (f == 1 && n1 == 0)
		{
			printf("%d ", f);
			n1 = 1;
			n--;
		}
		else
		{
			f = n1 + n2;
			n2 = n1;
			n1 = f;
			printf("%d ", f);
			n--;
		}
	}
	printf("\n\n");

	// 36
	printf("몇 층인가\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
			printf(" ");
		for (int j = 0; j < i + 1; j++)
			printf("%d", j + 1);
		for (int j = 0; j < i; j++)
			printf("%d", i - j);
		printf("\n");
	}
	printf("\n");

	// 37 어렵게 생각 X 수열 안 써도 됨
	printf("Input a number: ");
	scanf_s("%d", &n);
	int rev = 0;
	while (1)
	{
		if (n != 0)
		{
			rev *= 10;
			rev += n % 10;
			n /= 10;
		}
		else
			break;
	}
	printf("The number in reverse order is : %d\n\n", rev);

	// 38
	printf("Input a number: ");
	scanf_s("%d", &n);
	int temp = n;
	rev = 0;
	while (1)
	{
		if (temp != 0)
		{
			rev *= 10;
			rev += temp % 10;
			temp /= 10;
		}
		else
			break;
	}
	if(rev == n)
		printf("%d is a palindrome number\n\n", n);
	else
		printf("%d is not a palindrome number\n\n", n);

	// 39
	printf("Numbers between 100 and 200, divisible by 9 :\n");
	sum = 0;
	for (int i = 100; i <= 200; i++)
	{
		if (i % 9 == 0)
		{
			printf("%d ", i);
			sum += i;
		}
	}
	printf("\nThe sum : %d\n\n", sum);

	// 40
	printf("몇 층인가\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
			printf("  ");
		for (int j = 0; j < i + 1; j++)
			printf("%c ", j + 65);
		for (int j = 0; j < i; j++)
			printf("%c ", i - j + 64);
		printf("\n");
	}
	printf("\n");
	
	// 41 . 비트연산 / 재귀 / 포인터 및 배열 중 비트 연산자 이용
	printf("Input a decimal number: ");
	scanf_s("%d", &n);
	int check = 0;  count = 0;
	unsigned a = 0x80000000; //1000 0000 0000 0000 0000 0000 0000 0000
	//a의 크기를 4바이트로 만들어 n과 비교
	for (int i = 0; i < 32; i++)
	{
		if (check && count % 4 == 0)
			printf(" ");
		//맨 처음 1을 만나면 그 이후 숫자 4자리에 한 번씩 공백
		if ((a & n) == a)
		{
			//a와 n 둘 다 1인 자리만 1, 나머진 다 0
			//즉 n에서 해당 비트는 이진수로 만들었을 때 1인 자리
			printf("1");
			check++;
		}
		else
			printf("0");
		a >>= 1;
		count++;
	}
	printf("\n\n");

	// 42
	printf("Input a binary number :");
	scanf_s("%d", &n);
	temp = n;
	count = 1;
	sum = 0;
	while (temp > 0)
	{
		if (temp % 10)
		{
			sum += count;
		}
		count *= 2;
		temp /= 10;
	}
	printf("The Binary Number : %d\n", n);
	printf("The equivalent Decimal Number : %d\n\n", sum);

	// 43
	printf("Input 1st number for HCF: ");
	scanf_s("%d", &n1);
	printf("Input 2nd number for HCF: ");
	scanf_s("%d", &n2);
	int max, min;
	if (n1 > n2)
	{
		max = n1;
		min = n2;
	}
	else
	{
		max = n2;
		min = n1;
	}
	for (int i = min; i > 0; i--)
	{
		if (max % i == 0 && min % i == 0)
		{
			printf("The HCF of %d and %d is : %d\n\n", n1, n2, i);
			break;
		}
	}

	// 44
	printf("Input 1st number for LCM: ");
	scanf_s("%d", &n1);
	printf("Input 2nd number for LCM: ");
	scanf_s("%d", &n2);
	if (n1 > n2)
	{
		max = n1;
		min = n2;
	}
	else
	{
		max = n2;
		min = n1;
	}
	for (int i = min; i > 0; i--)
	{
		if (max % i == 0 && min % i == 0)
		{
			printf("The LCM of %d and %d is : %d\n\n", n1, n2, max * min / i);
			break;
		}
	}

	// 45
	printf("Input 1st number for LCM: ");
	scanf_s("%d", &n1);
	printf("Input 2nd number for LCM: ");
	scanf_s("%d", &n2);
	if (n1 > n2)
	{
		max = n1;
		min = n2;
	}
	else
	{
		max = n2;
		min = n1;
	}
	for (int i = 1; ; i++)
	{
		if ((max * i) % min == 0)
		{
			printf("The LCM of %d and %d is : %d\n\n", n1, n2, max * i);
			break;
		}
	}

	// 46 maht.h / double pow(double n, double i) => n의 i승
	printf("Input the binary number :");
	scanf_s("%d", &n);
	sum = 0;
	for (int i = 0; n > 0 ; i++)
	{
		sum += (n % 10) * (int)pow(2, i);
		n /= 10;
	}
	printf("The equivalent Decimal Number is : %d\n\n", sum);

	// 47
	printf("Input a number to check whether if is Strong number:");
	scanf_s("%d", &n);
	int temp_2;
	for (int i = n; i > 0; i /= 10)
	{
		temp_2 = 1;
		for (int j = 1; j <= i % 10; j++)
			temp_2 *= j;
		temp += temp_2;
	}
	if (temp == n)
		printf("%d is a Strong number\n\n", n);
	else
		printf("%d is not a Strong number\n\n", n);

	// 48
	printf("Input starting range of number :");
	scanf_s("%d", &n1);
	printf("Input ending range of number :");
	scanf_s("%d", &n2);
	printf("The strong numbers are :\n");
	for (int i = n1; i <= n2; i++)
	{
		temp = 0;
		for (int j = i; j > 0; j /= 10)
		{
			temp_2 = 1;
			for (int k = 1; k <= j % 10; k++)
				temp_2 *= k;
			temp += temp_2;
		}
		if (temp == i)
			printf("%d ", i);
	}
	printf("\n\n");

	// 49
	printf("Input the starting number of the A.P.series: ");
	scanf_s("%d", &n);
	printf("Input the number of items for the A.P.series: ");
	scanf_s("%d", &n1);
	printf("Input the common difference of A.P.series: ");
	scanf_s("%d", &n2);
	sum = n2 * n1 * (n1 + 1) / 2 + (n - n2) * n1;
	printf("The sum of the A.P.series are :\n");
	for (int i = 0; i < n1; i++)
	{
		printf("%d ", n + n2 * i);
		if (i == n1 - 1)
			break;
		printf("+ ");
	}
	printf("= %d\n\n", sum);

	// 50 어렵게 생각 X
	printf("Enter a number to convert : ");
	scanf_s("%d", &n);
	sum = 0;
	count = 1;
	for (int i = n; i > 0; i /= 8)
	{
		sum += (i % 8) * count;
		count *= 10;
	}
	printf("The Octal of %d is %d\n\n", n, sum);

	// 51
	printf("Input an octal number (using digit 0 - 7) :");
	scanf_s("%d", &n);
	sum = 0;
	count = 1;
	for (int i = n; i > 0; i /= 10)
	{
		sum += (i % 10) * count;
		count *= 8;
	}
	printf("The Octal Number : %d\n", n);
	printf("The equivalent Decimal Number : %d\n\n", sum);

	// 52
	double l1, l2;
	double sumf;
	printf("Input the first number of the G.P.series: ");
	scanf_s("%lf", &l1);
	printf("Input the number of terms in the G.P.series: ");
	scanf_s("%d", &n);
	printf("Input the common ratio of A.P.series: ");
	scanf_s("%lf", &l2);
	double countl = 1;
	double r = 1;
	for (int i = 0; i < n; i++)
		r *= l2;
	sumf = l1 * (r - 1) / (l2 - 1);
	for (int i = 0; i < n; i++)
	{
		printf("%f ", l1 * countl);
		countl *= l2;
	}
	printf("\nThe Sum of the G.P.series : %f\n\n", sumf);

	// 53
	printf("Input a binary number : ");
	scanf_s("%d", &n);
	sum = 0;
	count = 1;
	for (int i = n; i > 0; i /= 1000)
	{
		temp = i % 1000;
		sum += (temp % 10 + (temp % 100) / 10 * 2 + temp / 100 * 4) * count;
		count *= 10;
	}
	printf("The equivalent Octal Number : %d\n\n", sum);

	// 54
	printf("Input an octal number (using digit 0 - 7) : ");
	scanf_s("%d", &n);
	sum = 0;
	count = 1;
	for (int i = n; i > 0; i /= 10)
	{
		temp = i % 10;
		sum += (temp / 4 * 100 + (temp % 4) / 2 * 10 + temp % 2) * count;
		count *= 1000;
	}
	printf("The equivalent Binary Number : %d\n\n", sum);

	// 55
	// 문자로 출력 -> 자릿수를 곱해서 순서대로 출력 불가
	// 아래자리부터 저장(역순) 후 역순으로 읽으면 정순으로 출력
	// 16진수 한 자리당 두 자리로 묶어 저장
	printf("Input any Decimal number: ");
	scanf_s("%d", &n);
	sum = 0;
	count = 1;
	for (int i = n; i > 0; i /= 16)
	{
		temp = i % 16;
		if (temp < 10)
			temp += 48;
		else
			temp += 55;
		sum = sum * count + temp;
		count *= 100;
	}
	printf("The equivalent Hexadecimal Number : ");
	for (int i = sum; i > 0; i /= 100)
		printf("%c", i % 100);
	printf("\n\n");

	// 56
	// 반복문과 if문을 너무 중첩되게 사용하려고 함
	printf("Input a positive integer: ");
	scanf_s("%d", &n);
	for (int i = 2; i <= n / 2; i++)
	{
		check = 0;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
			if (j == i - 1)
				check++;
		}
		if (check)
		{
			for (int j = 2; j < n - i; j++)
			{
				if ((n - i) % j == 0)
					break;
				if(j == n - i - 1)
					printf("%d = %d + %d \n", n, i, n - i);
			}
		}
	}
	printf("\n");

	// 57
	char s[10] = { 0 };
	char tempc;
	printf("Input a string to reverse : ");
	scanf_s("%s", s, (int)sizeof(s)/(int)sizeof(char));
	int size = (int)strlen(s);
	for (int i = 0; i < size / 2; i++)
	{
		tempc = s[i];
		s[i] = s[size - 1 - i];
		s[size - 1 - i] = tempc;
	}
	printf("Reversed string is: %s\n\n", s);

	// 58
	memset(s, 0, 10);
	printf("Input a string : ");
	scanf_s("%s", s, 10 * (int)sizeof(char));
	for (int i = 0; i < 10; i++)
	{
		if (s[i] == 0)
		{
			printf("The string contains %d number of characters\n\n", i);
			break;
		}
	}

	// 59
	printf("Input an integer : ");
	scanf_s("%d", &n);
	sum = 0;
	count = 0;
	for (int i = n; i > 0; i /= 10)
		count++;

	for (int i = n; i > 0; i /= 10)
	{
		temp = i % 10;
		sum += (int)pow((double)temp, (double)count);
	}
	if (sum == n)
		printf("%d is an Armstrong number\n\n", n);
	else
		printf("%d is not an Armstrong number\n\n", n);

	return 0;
}