#include<stdlib.h>
#include<stdio.h>

void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

void merge(int arr[], int l, int m, int r){
    int i,j,k;
    int num1= m-l+1;
    int num2= r-m;
    int L[num1], R[num2];

    for(i=0;i<num1;i++)
        L[i]=arr[l+i];
    for(j=0;j<num2;j++)
        R[j]=arr[m+1+j];


    i=0,j=0;
    k=l;
    while(i< num1 && j< num2){
        if(L[i]<=R[j]){
            arr[k]= L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i<num1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j<num2){
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergesort(int arr[],int l,int r){

    if(l<r){
        int m=l+(r-l)/2; //r-l
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}


int main(){

int arr[]={8,12,5,8,20};
int arr_size= sizeof(arr)/sizeof(arr[0]);

mergesort(arr,0,arr_size-1);

printf("\nSorted array is \n");
printArray(arr, arr_size);

return 0;
}






