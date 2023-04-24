//C PROGRAM TO CALCULATE SUM OF PRINCIPAL AND SECONDARY DIAGONAL ELEMENTS

#include<stdio.h>
#define SIZE 20
int main()
{
    int i,j,m,n,a[SIZE][SIZE],sum1 = 0,sum2 = 0;

    printf("Enter the order of square matrix\n");
    scanf("%d%d",&m,&n);

    printf("Enter the matrix elements\n");
    for(i = 0 ; i < m ; i++)
    {
        for(j = 0 ; j < n ; j++)
            scanf("%d",&a[i][j]);
    }

    for(i = 0 ; i < m ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
            if(i == j)
            {
                sum1 = sum1 + a[i][j];
            }

            if(i + j == n - 1)
                sum2 = sum2 + a[i][j];
            
        }
    }

    printf("The sum of principal diagonal elements are %d\n",sum1);
    printf("The sum of secondary diagonal elements are %d\n",sum2);
}