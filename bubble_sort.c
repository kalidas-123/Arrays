//C PROGRAM TO ARRANGE THE ELEMENTS USING BUBBLE SORT 

#include<stdio.h>
#define SIZE 20
int main()
{
    int i , j , n , temp , a[SIZE];

    printf("Enter array size\n");
    scanf("%d",&n);

    printf("Enter %d elements\n",n);
    for(i = 0 ; i < n ; i++)
        scanf("%d",&a[i]);

    for(i = 0 ; i < n - 1 ; i++)
    {
        for(j = 0 ; j < n - 1 - i ; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted list is\n");
    for(i = 0 ; i < n ; i++)
        printf("%d\n",a[i]);

    return 0;
}