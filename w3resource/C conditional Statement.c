#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	// 1
	int n1, n2;
	printf("같은지 비교할 두 정수 입력\n");
	scanf_s("%d %d", &n1, &n2);
	if (n1 == n2) printf("Number1 and Number2 are equal\n\n");
	else printf("Number1 and Number2 are not equal\n\n");

	// 2
	printf("홀수 짝수 구분할 정수 입력\n");
	scanf_s("%d", &n1);
	if (n1 % 2) printf("%d is an odd integer\n\n", n1);
	else printf("%d is an even integer\n\n", n1);

	// 3
	printf("양수 음수 구분할 정수 입력\n");
	scanf_s("%d", &n1);
	if (n1 > 0) printf("%d is a positive nubmer\n\n", n1);
	else if (n1 < 0) printf("%d is a negative nubmer\n\n", n1);
	else printf("%d is 0\n\n", n1);

	// 4
	printf("윤년인지 구분할 연도 입력\n");
	scanf_s("%d", &n1);
	if (n1 % 400 == 0) printf("%d is a leap year\n\n", n1);
	else if (n1 % 100 == 0) printf("%d is not a leap year\n\n", n1);
	else if (n1 % 4 == 0) printf("%d is a leap year\n\n", n1);
	else printf("%d is not a leap year\n\n", n1);

	// 5
	printf("투표권 있는지 확인할 나이 입력\n");
	scanf_s("%d", &n1);
	if (n1 > 18) printf("Congratulation! You are eligible for casting your vote\n\n");
	else printf("You are not eligible for casting your vote\n\n");

	// 6
	printf("양수면 1, 0이면 0, 음수면 -1 출력:  ");
	int m, n = 1;
	scanf_s("%d", &m);
	if (m > 0) printf("The value of n = %d\n\n", n);
	else if (m == 0) printf("The value of n = %d\n\n", n - 1);
	else printf("The value of n = %d\n\n", n - 2);

	// 7
	printf("키를 입력: ");
	scanf_s("%d", &n);
	if (n < 150) printf("The person is Dwarf\n\n");
	else if (n < 160) printf("The person is Half-Dwarf\n\n");
	else if (n < 180) printf("The person is Human\n\n");
	else printf("The person is Monster\n\n");

	// 8
	printf("세 가지 정수 입력\n");
	scanf_s("%d %d %d", &n, &n1, &n2);
	int largest = (((n > n1) ? n : n1) > n2) ? ((n > n1) ? n : n1) : n2;
	printf("1st Number = %d,     2nd Number = %d,     3rd Number = %d\n", n, n1, n2);
	if (largest == n) printf("The 1st Number is the greatest among there\n\n");
	else if (largest == n1) printf("The 2nd Number is the greatest among there\n\n");
	else printf("The 3rd Number is the greatest among there\n\n");

	// 9
	printf("몇 사분면인지 알고 싶은 xy좌표 입력\n");
	scanf_s("%d %d", &n1, &n2);
	if (n1 > 0 && n2 > 0) printf("The coordinate point (%d, %d) lies in the First quadrant.\n\n", n1, n2);
	else if (n1 < 0 && n2 > 0) printf("The coordinate point (%d, %d) lies in the Second quadrant.\n\n", n1, n2);
	else if (n1 < 0 && n2 < 0) printf("The coordinate point (%d, %d) lies in the Third quadrant.\n\n", n1, n2);
	else printf("The coordinate point (%d, %d) lies in the Fourth quadrant.\n\n", n1, n2);

	// 10
	int maths, phy, chem;
	printf("입학 자격 확인을 위해 수학, 물리, 화학 성적 입력\n");
	scanf_s("%d %d %d", &maths, &phy, &chem);
	if ((((maths >= 65 && phy >= 55) && chem >= 50) && maths + phy + chem >= 190) || (maths + phy >= 140))
		printf("The candidate is eligible for admission\n\n");
	else
		printf("The candidate is not eligible for admission\n\n");

	// 11
	printf("근을 알고 싶은 이차방정식(ax^2 + bx + c)의 a, b, c 순서대로 입력\n");
	scanf_s("%d %d %d", &n, &n1, &n2);
	double root1, root2;
	if (n1 * n1 - 4 * n * n2 < 0)
		printf("Root are imaginary\n\n");
	else
	{
		root1 = (double)(n1 * (-1) + sqrt(n1 * n1 - 4 * n * n2)) / (2 * n);
		root2 = (double)(n1 * (-1) - sqrt(n1 * n1 - 4 * n * n2)) / (2 * n);
		printf("%f\n%f\n\n", root1, root2);
	}

	// 12
	int ca, total;
	char name[10], division[10] = { 0 };
	double percentage;
	printf("Input the Roll Number of the student :");
	scanf_s("%d", &n);
	printf("Input the Name of the Student :");
	scanf_s("%s", name, (int)sizeof(name));
	printf("Input the marks of Physics, Chemistry and Computer Application :\n");
	scanf_s("%d %d %d", &phy, &chem, &ca);
	total = phy + chem + ca;
	percentage = (double)total / 3;
	if (percentage >= 60)
		strcpy_s(division, sizeof(division), "First");
	else if (percentage >= 45)
		strcpy_s(division, sizeof(division), "Second");
	else if (percentage >= 33)
		strcpy_s(division, sizeof(division), "Third");
	else
		strcpy_s(division, sizeof(division), "Fail");
	printf("Roll No : %d\n", n);
	printf("Name of Student : %s\n", name);
	printf("Marks in Physics : %d\n", phy);
	printf("Marks in Chemistry : %d\n", chem);
	printf("Marks in Computer Application : %d\n", ca);
	printf("Total Marks = %d \n", total);
	printf("Percentage = %.2f\n", percentage);
	printf("Division = %s\n\n", division);

	// 13
	int temp;
	printf("기온을 입력하라\n");
	scanf_s("%d", &temp);
	if (temp < 0)
		printf("Freezing weather\n\n");
	else if (temp / 10 == 0)
		printf("Very Cold weather\n\n");
	else if (temp / 10 == 1)
		printf("Cold Weather\n\n");
	else if (temp / 10 == 2)
		printf("Normal in Temp\n\n");
	else if (temp / 10 == 3)
		printf("Its Hot\n\n");
	else
		printf("Its Very Hot\n\n");

	// 14
	printf("세 변의 길이를 입력하라\n");
	scanf_s("%d %d %d", &n, &n1, &n2);
	if (n == n1 && n1 == n2)
		printf("This is an equilateral triangle\n\n");
	else if (n == n1 || n1 == n2 || n2 == n)
		printf("This is an isosceles triangle\n\n");
	else
		printf("This is a scalene triangle\n\n");

	// 15
	printf("세 각의 각도를 입력하라\n");
	scanf_s("%d %d %d", &n, &n1, &n2);
	if (n + n1 + n2 == 180 && (n > 0 && n1 > 0 && n2 > 0))
		printf("The triangle is valid\n\n");
	else
		printf("The triangle is not valid\n\n");

	// 16
	char ch;
	printf("구분할 문자를 입력하라\n");
	scanf_s(" %c", &ch, (int)sizeof(char));
	if ((ch > 64 && ch < 91) || (ch > 96) && (ch < 123))
		printf("This is an alphabet\n\n");
	else if (ch > 47 && ch < 58)
		printf("This is a digit\n\n");
	else
		printf("This is a special character\n\n");

	// 17
	printf("자음인지 모음인지 구분할 문자를 입력하라\n");
	scanf_s(" %c", &ch, (int)sizeof(char));
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		printf("The alphabet is a vowel\n\n");
	else if ((ch > 64 && ch < 91) || (ch > 96) && (ch < 123))
		printf("The alphabet is a consonant\n\n");
	else
		printf("The character is not an alphabet\n\n");

	// 18
	printf("이번 거래에서 쓰는 비용과 얻는 이득을 입력하라\n");
	scanf_s("%d %d", &n1, &n2);
	if (n1 < n2)
		printf("You can booked your profit amount : %d\n\n", n2 - n1);
	else if (n1 > n2)
		printf("You lost : %d\n\n", n1 - n2);
	else
		printf("You have neither any profit nor any loss\n\n");

	// 19
	double rs, surcharge = 0.0, charperunit;
	memset(name, 0, sizeof(name));
	printf("ID number와 이름, 쓴 양을 입력하라\n");
	scanf_s("%d %s %d", &n1, name, (int)sizeof(name), &n2);
	if (n2 < 200)
		charperunit = 1.20;
	else if (n2 < 400)
		charperunit = 1.50;
	else if (n2 < 600)
		charperunit = 1.80;
	else
		charperunit = 2.00;
	rs = charperunit * n2;
	if (rs > 400)
		surcharge = rs * 0.15;
	if (rs < 100)
		rs = 100;
	printf("Customer IDNO :%d\n", n1);
	printf("Customer Name:%s\n", name);
	printf("unit Consumed : %d\n", n2);
	printf("Amount Charges @Rs. %.2f per unit : %.2f\n", charperunit, rs);
	printf("Surcharge Amount : %.2f\n", surcharge);
	printf("Net Amount Paid By the Customer : %.2f\n\n", rs + surcharge);

	// 20
	printf("Input the grade :");
	scanf_s(" %c", &ch, (int)sizeof(ch));
	switch (ch)
	{
	case 'E':
		printf("You have chosen : Excellent\n\n");
		break;
	case 'V':
		printf("You have chosen : Excellent\n\n");
		break;
	case 'G':
		printf("You have chosen : Good\n\n");
		break;
	case 'A':
		printf("You have chosen : Average\n\n");
		break;
	case 'F':
		printf("You have chosen : Fail\n\n");
		break;
	default:
		printf("Error\n\n");
	}

	// 21
	printf("몇 번째 요일인가 ");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		printf("Monday\n\n");
		break;
	case 2:
		printf("Tuesday\n\n");
		break;
	case 3:
		printf("Wednesday\n\n");
		break;
	case 4:
		printf("Thursday\n\n");
		break;
	case 5:
		printf("Friday\n\n");
		break;
	case 6:
		printf("Saturday\n\n");
		break;
	case 7:
		printf("Sunday\n\n");
		break;
	default:
		printf("Error\n\n");
		break;
	}

	// 22
	printf("한 자리 숫자 입력\n ");
	scanf_s("%d", &n);
	switch (n)
	{
	case 0:
		printf("Zero\n\n");
		break;
	case 1:
		printf("One\n\n");
		break;
	case 2:
		printf("Two\n\n");
		break;
	case 3:
		printf("Three\n\n");
		break;
	case 4:
		printf("Four\n\n");
		break;
	case 5:
		printf("Five\n\n");
		break;
	case 6:
		printf("Six\n\n");
		break;
	case 7:
		printf("Seven\n\n");
		break;
	case 8:
		printf("Eight\n\n");
		break;
	case 9:
		printf("Nine\n\n");
		break;
	default:
		printf("Not digit\n\n");
		break;
	}

	// 23
	printf("몇 번째 달인가 ");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		printf("January\n\n");
		break;
	case 2:
		printf("February\n\n");
		break;
	case 3:
		printf("March\n\n");
		break;
	case 4:
		printf("April\n\n");
		break;
	case 5:
		printf("May\n\n");
		break;
	case 6:
		printf("June\n\n");
		break;
	case 7:
		printf("July\n\n");
		break;
	case 8:
		printf("August\n\n");
		break;
	case 9:
		printf("September\n\n");
		break;
	case 10:
		printf("October\n\n");
		break;
	case 11:
		printf("November\n\n");
		break;
	case 12:
		printf("December\n\n");
		break;
	default:
		printf("Error\n\n");
		break;
	}

	// 24
	printf("몇 번째 달인가 ");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		printf("Month have 31 days\n\n");
		break;
	case 2:
		printf("Month have 28 days\n\n");
		break;
	case 3:
		printf("Month have 31 days\n\n");
		break;
	case 4:
		printf("Month have 30 days\n\n");
		break;
	case 5:
		printf("Month have 31 days\n\n");
		break;
	case 6:
		printf("Month have 30 days\n\n");
		break;
	case 7:
		printf("Month have 31 days\n\n");
		break;
	case 8:
		printf("Month have 31 days\n\n");
		break;
	case 9:
		printf("Month have 30 days\n\n");
		break;
	case 10:
		printf("Month have 31 days\n\n");
		break;
	case 11:
		printf("Month have 30 days\n\n");
		break;
	case 12:
		printf("Month have 31 days\n\n");
		break;
	default:
		printf("Error\n\n");
		break;
	}

	// 25
	printf("어떤 도형의 넓이 1.원 2.사각형 3.삼각형 : ");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		printf("반지름을 입력하라 :");
		scanf_s("%d", &n1);
		printf("The area is : %f\n\n", n1 * n1 * 3.14);
		break;
	case 2:
		printf("높이와 길이를 입력하라 :");
		scanf_s("%d %d", &n1, &n2);
		printf("The area is : %d\n\n", n1 * n2);
		break;
	case 3:
		printf("한 변의 길이와 높이를 입력하라 :");
		scanf_s("%d %d", &n1, &n2);
		printf("The area is : %f\n\n", n1 * n1 * 0.5);
		break;
	default:
		printf("Error\n\n");
		break;
	}

	// 26
	printf("연산할 두 숫자를 입력하라\n");
	scanf_s("%d %d", &n1, &n2);
	printf("어떤 연산 1.덧셈 2.뺄셈 3.곱셈 4.나눗셈\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		printf("The Addition of %d and %d is : %d\n\n", n1, n2, n1 + n2);
		break;
	case 2:
		printf("The Subtraction of %d and %d is : %d\n\n", n1, n2, n1 - n2);
		break;
	case 3:
		printf("The Multiplication of %d and %d is : %d\n\n", n1, n2, n1 * n2);
		break;
	case 4:
		printf("The Division of %d and %d is : %f\n\n", n1, n2, (double)n1 / n2);
		break;
	default:
		printf("Error\n\n");
		break;
	}

	return 0;
}