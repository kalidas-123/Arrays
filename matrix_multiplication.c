//C PROGRAM TO MULTIPLY TWO MATRICES

#include<stdio.h>
#define SIZE 20
int main()
{
    int a[SIZE][SIZE],c[SIZE][SIZE],b[SIZE][SIZE],i,j,m,n,p,q,k;

    printf("Enter the order of first matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter the order of second matrix\n");
    scanf("%d%d",&p,&q);

    if(n == p && m == q)
    {
        printf("Enter the elements of first matrix\n");
        for(i = 0 ; i < m ; i++)
        {
            for(j = 0 ; j < n ; j++)
                scanf("%d",&a[i][j]);
        }

        printf("Enter the elements of second matrix\n");
        for( i = 0 ; i < p ; i++)
        {
            for(j = 0 ; j < q ; j++)
                scanf("%d",&b[i][j]);
        }

        printf("Resultant matrix is\n");
        for(i = 0 ; i < m ; i++)
        {
            for(j = 0 ; j < q ; j++)
            {
                c[i][j] = 0;
                for(k = 0 ; k < n ; k++)
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }        
    }
    else
        printf("Matrices are of differnt order\n");
}