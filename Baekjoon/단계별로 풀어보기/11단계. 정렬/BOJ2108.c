#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void PrintAverage(const int n[], const int size, const int N);
void PrintMedian(const int n[], const int size, const int N);
void PrintMostOften(const int n[], const int size, const int N);
void PrintMaXMin(const int n[], const int size, const int N);

int main()
{
    int N, num, size = 8001;
    scanf("%d", &N);
    int n[8001] = { 0 };
    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &num);
        ++n[num + 4000];
    }
    PrintAverage(n, size, N);
    PrintMedian(n, size, N);
    PrintMostOften(n, size, N);
    PrintMaXMin(n, size, N);

    return 0;
}

void PrintAverage(const int n[], const int size, const int N)
{
    double sum = 0;
    double avg = 0;
    for (int i = 0; i < size; ++i)
        sum += (i - 4000) * n[i];
    avg = sum / N;
    if (avg > 0 && avg - (int)avg >= 0.5)
        printf("%d\n", (int)avg + 1);
    else if (avg < 0 && avg - (int)avg <= -0.5)
        printf("%d\n", (int)avg - 1);
    else
        printf("%d\n", (int)avg);
}

void PrintMedian(const int n[], const int size, const int N)
{
    for (int i = 0, count = 0; i < size; ++i)
    {
        count += n[i];
        if (count >= N / 2 + 1)
        {
            printf("%d\n", i - 4000);
            return;
        }
    }
}

void PrintMostOften(const int n[], const int size, const int N)
{
    int mostoften = 0;
    int frequency = 0, frequencycheck = 0;
    for (int i = 0; i < size; ++i)
    {
        if (n[i] > frequency)
            frequency = n[i];
    }
    for (int i = 0; i < size && frequencycheck < 2; ++i)
    {
        if (n[i] == frequency)
        {
            mostoften = i - 4000;
            ++frequencycheck;
        }
    }
    printf("%d\n", mostoften);
}

void PrintMaXMin(const int n[], const int size, const int N)
{
    int min = -4000, max = 4000;
    for (int i = 0; i < size; ++i)
    {
        if (n[i] != 0)
        {
            min = i - 4000;
            break;
        }
    }
    for(int i = size - 1; i >= 0; --i)
    {
        if (n[i] != 0)
        {
            max = i - 4000;
            break;
        }
    }
    printf("%d", max - min);
}