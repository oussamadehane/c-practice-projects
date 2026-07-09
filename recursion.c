#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int ReadNumber()
{
    int Number = 0;
    printf("Please Enter A Number: ");

    // التحقق من نجاح عملية القراءة
    while (scanf("%d", &Number) != 1)
    {
        printf("Invalid input! Please enter a valid number: ");
        // تنظيف مدخلات الذاكرة المؤقتة من أي رموز خاطئة
        (void)scanf("%*[^\n]");
        (void)scanf("%*c");
    }
    return Number;
}


void Recursion(int Number)
{
    //  Base Case;
    if (Number == 0)return;
    printf("%d\n", Number);
    Recursion(Number - 1);
}


int main() {
   
    Recursion(ReadNumber());
    return 0;
}
