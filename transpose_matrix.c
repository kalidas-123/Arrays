//C PROGRAM TO CALCULATE TRANSPOSE OF A MATRIX

#include<stdio.h>
#define SIZE 20
int main()
{
    int i,j,m,n,a[SIZE][SIZE],trans[SIZE][SIZE];

    printf("Enter the order of matrix\n");
    scanf("%d%d",&m,&n);

    printf("Enter matrix elements\n");
    for(i = 0 ; i < m ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
                scanf("%d",&a[i][j]);
                trans[j][i] = a[i][j];
        }
    } 

    printf("Transposed matrix is\n");
    for(i = 0 ; i < n ; i++)
    {
        for(j = 0 ; j < m ; j++)
            printf("%d ",trans[i][j]);

        printf("\n");    
    }   

    return 0;

}