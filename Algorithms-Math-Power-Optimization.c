#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ReadNumber()
{
    int Number = 0;
    printf(" Please Enter A Number: ");

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


int ReadPower()
{
    int Number = 0;
    printf(" Please Enter A The Power : ");

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

int PowerWithRecursion(int Number, int Pow)
{
    // القاعدة: أي عدد أس 0 يساوي 1
    if (Pow == 0)
        return 1;

    // حساب النصف (تقنية القسمة والسيادة)
    int HalfValue = PowerWithRecursion(Number, Pow / 2);

    // تربع النتيجة
    int Result = HalfValue * HalfValue;

    // إذا كان الأس فردياً، نضرب في العدد مرة إضافية
    if (Pow % 2 != 0)
        return Result * Number;

    return Result;
}


int main() {
    int N = ReadNumber();
    int Pow = ReadPower();

    
   printf("%d", PowerWithRecursion(N, Pow));
   
  

    return 0;
}
