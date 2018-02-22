#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int arr[],int n){

    int i,j,key;
    for(i=0; i<n ;i++){

        key=arr[i];
        j=i-1;

      while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j=j-1;
      }
     arr[j+1]=key;

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
    printf("--- INSERTION SORT  ---\n");
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}


