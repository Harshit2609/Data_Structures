#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("enter the size of array:");
    scanf("%d",&n);

    //cannot write A[n]
    int *A = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        A[i]=i+1;
        printf("%d\n",A[i]);  //1 2 3 4 5
    }
     //free(A) // this will free the memory

     // printing array A[] after free will give garbage value

     int *B =(int*)realloc(A, 2*n*sizeof(int));// previous memory block and size of new block

     //int *B =(int*)realloc(NULL, 2*n*sizeof(int)); //same as malloc
     for(i=0;i<2*n;i++)
     {
         printf("%d\n",B[i]);
         //prints 1 2 3 4 5 and 0 -553647148 41478 and so on..i.e. garbage
     }

    return 0;
}
