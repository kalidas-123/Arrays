//C PROGRAM TO ADD TWO MATRICES

#include<stdio.h>
#define SIZE 20
int main()
{
    int a[SIZE][SIZE] , b[SIZE][SIZE] ,c[SIZE][SIZE], i , j , m , n , p , q;

    printf("Enter order of first matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter order of second matrix\n");
    scanf("%d%d",&p,&q);

    if(m == p && n == q)
    {
        printf("Enter elements of first matix\n");
        for(i = 0 ; i < m ; i++)
        {
            for(j = 0 ; j < n ; j++)
                scanf("%d",&a[i][j]);
        }

        printf("Enter the elements of second matrix\n");
        for(i = 0 ; i < p ; i++)
        {
            for(j = 0 ; j < q ; j++)
                scanf("%d",&b[i][j]);
        }

        printf("Resultant matrix is \n");
        for(i = 0 ; i < m ; i++)
        {
            for(j = 0 ; j < n ; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Order of the matrix are different\n");

    return 0;
}