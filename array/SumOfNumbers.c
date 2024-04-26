#include <stdio.h>

int main()
{
    int a[100],i,limit,sum=0;
    printf("Enter the array limit less than 100:");
    scanf("%d", &limit);
    printf("Enter the numbers:");
    for(i=0;i<limit;i++){
     scanf("%d",&a[i]);
     
    }
        for(i=0;i<limit;i++){
            sum=sum+a[i];
    }
    printf("Sum of numbers is: %d ",sum);

    return 0;
}
