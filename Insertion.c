/*** Insertion sort********/

#include<stdio.h>
#define N 5

void insertion_sort(int *arr)
{
    int i,j,temp;
    
    for(i=1;i<N;i++)
    {
        temp=arr[i];
        j=i-1;
        
        while(j>=0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = temp;
    }
}

int main()
{
    int arr[N];
    int i;
    
    printf("Enter %d elements of the array:\n",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",(arr+i));
    }
    
    insertion_sort(arr);
    
    printf("The array after sorting:\n");
    for(i=0;i<N;i++)
    {
        printf("%d ",*(arr+i));
    }
}
