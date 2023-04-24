//C PROGRAM TO FIND THE LARGEST NUMBER OF AN ARRAY

#include<stdio.h>
#define SIZE 20
int main()
{
    int a[SIZE] , i , n , lar;

    printf("Enter array size\n");
    scanf("%d",&n);

    
    printf("Enter %d values\n",n);
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);

        lar = a[0];
        if(a[i] > lar)
            lar = a[i];
    }

    printf("Largest number of an array is %d\n",lar);

    return 0;
}