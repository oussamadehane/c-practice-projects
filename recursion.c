#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int ReadNumber()
{
    int Number = 0;
    printf("Please Enter A Number: ");

    while (scanf("%d", &Number) != 1)
    {
        printf("Invalid input! Please enter a valid number: ");
        (void)scanf("%*[^\n]");
        (void)scanf("%*c");
    }
    return Number;
}
void ReverseRecursion(int Number)
{
    //  Base Case;
    if (Number == 0)return;
    ReverseRecursion(Number - 1);
    printf("%d\n", Number);
}


void Recursion(int Number)
{
    //  Base Case;
    if (Number == 0)return;
    printf("%d\n", Number);
    Recursion(Number - 1);
    
}


int main() {
   
    printf("print Number From Number to 1 \n");
    Recursion(ReadNumber());
    printf("print Number From 1 to Number \n");
    ReverseRecursion(ReadNumber());
    return 0;
}
