#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ReadNumber()
{
    int Number = 0;
    printf("Please Enter A Number: ");

    // التحقق من صحة الإدخال
    while (scanf("%d", &Number) != 1)
    {
        printf("Invalid input! Please enter a valid number: ");
        // تنظيف مدخلات الذاكرة المؤقتة من أي رموز خاطئة
        (void)scanf("%*[^\n]");
        (void)scanf("%*c");
    }
    return Number;
}

int FibonaciWithRecuecion(int X)
{
    if (X < 2) return X;

    return FibonaciWithRecuecion(X - 1) + FibonaciWithRecuecion(X - 2);
}

void FibonachiSeries(int X)
{
    int FibNum = 0, FirstNumber = 0, SecondNumber = 1, i = 0;
    
    for (i = 0; i < X; i++)
    {
        printf("%d \n", FirstNumber); // طباعة الرقم الحالي
        FibNum = FirstNumber + SecondNumber;
        FirstNumber = SecondNumber;
        SecondNumber = FibNum;
    }
}

int main() {
    int N = ReadNumber();
    printf("Fibonacci at %d is: %d\n", N, FibonaciWithRecuecion(N));
    
    printf("Fibonacci Series up to %d:\n", N);
    FibonachiSeries(N);
    
    return 0;
}
