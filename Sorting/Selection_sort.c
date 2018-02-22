#include <stdio.h>
#include <stdlib.h>

// Selection sort

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i,j,smallest;
     for(j=0;j<n-1;j++)
    {
    smallest=j;
    for(i=j+1;i<n;i++){
        if(arr[i]<arr[smallest]){
            smallest=i;
        }
        swap(&arr[smallest],&arr[j]);
        }
    }

}

 void printArray(int arr[], int size)
     {
     int z;
     for(z=0;z<size;z++){
        printf(" Sorted array is: %d\n",arr[z]);
     }
     }


int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}



