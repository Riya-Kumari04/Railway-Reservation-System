#include<stdio.h>

void linearSearch(int e , int arr[] , int n);

int main()
{
    int n , ele;
    printf("Enter the number of elements you want to input\n");
    scanf("%d",&n);
    int arr[n];
    int i , j;
    for (i = 0 ; i <= n-1; i++)
    {
        printf("Enter the element [%d] : ",i);
        scanf("%d",&arr[i]);
    }
    for (j = 0; j <= n-1; j++)
    {
        printf("%d ",arr[j]);
    }
    printf("\nEnter the element which you want to search\n");
    scanf("%d",&ele);
    linearSearch(ele , arr , n);
    return 0;
}

void linearSearch(int e , int arr[] , int n)
{
    int k , result = 0;
    for (k = 0; k <= n-1; k++)
    {
        if (e == arr[k])
        {
            result++;
            break;
        }
        
    }
    if (result == 1)
    {
        printf("The element %d is at place %d",e,k+1);
    }
    else
    {
        printf("Element not found\n");
    }
    
}