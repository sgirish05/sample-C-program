#include <stdio.h>

int main()
{
    int a,b,sum;
    printf("Enter 1st number");
    scanf("%d",&a);
    printf("Enter 2nd number");
    scanf("%d",&b);
    sum = a + b;
    printf("Number entered is \t%d\nSecond number entered is%d\nResult is\t%d", a,b,sum);

    return 0;
}
