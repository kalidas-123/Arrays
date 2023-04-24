//C PROGRAM TO SEARCH A KEY ELEMENT IN A ARRAY

#include<stdio.h>
#define SIZE 20
int main()
{
    int i , n , key , a[SIZE] , flag = 0 , index;

    printf("Enter array size\n");
    scanf("%d",&n);

    printf("Enter %d elements\n",n);
    for(i = 0 ; i < n ; i++)
    {    
        scanf("%d",&a[i]);
    }

    printf("Enter key element to be searched\n");
    scanf("%d",&key);

    for(i = 0 ; i < n ; i++)
    {
        if(a[i] == key)
        {    
            flag = 1;
            index = i;
        }
    }
    
    if(flag == 1)
        printf("Successful search at location %d\n",index);
    else
    {    
        printf("Unsuccesful search\n");   
    }

    return 0;
}