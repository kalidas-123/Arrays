//C PROGRAM TO PRINT THE SUM OF ARRAY

#include<stdio.h>
#define SIZE 50
int main()
{
    int i , n , a[SIZE] , sum = 0;

    printf("Enter array size\n");
    scanf("%d",&n);
    
    printf("Enter n values\n");
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }

    printf("The sum of array is %d\n",sum);

    return 0;
}