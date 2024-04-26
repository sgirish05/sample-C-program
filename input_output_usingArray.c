#include <stdio.h>

int main()
{
    int a[100],i,limit;
    printf("Enter the array limit less than 100:");
    scanf("%d", &limit);
    printf("Enter the numbers:");
    for(i=0;i<limit;i++){
     scanf("%d",&a[i]);
     }
    printf("Entered value are: ");
        for(i=0;i<limit;i++){
         printf("%d ",a[i]);
     
    }  

    return 0;
}
