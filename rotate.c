//C PROGRAM TO ROTATE THE NUMBER POSITION BY ONE

#include<stdio.h>
#define SIZE 20
int main()
{
    int a[SIZE],i,n,temp;

    printf("Enter array size\n");
    scanf("%d",&n);

    printf("Enter %d elements\n",n);
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }

    temp = a[n - 1];
    for(i = n - 1 ; i > 0 ; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = temp;
    for(i = 0 ; i<n ; i++)
    printf("%d ",a[i]);
    
    return 0;
}