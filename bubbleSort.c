#include<stdio.h>

void printArray(int *A,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
}
void bubbleSort(int *A, int n){
    int temp;
    for(int i=0;i<n-1;i++)//for number of passes
    {
        for(int j=0;j<n-1-i;j++)//for comparison in each pass
        {
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }

    }
}
void AdaptivebubbleSort(int *A, int n){
    int temp;
    int isSorted=0;
    for(int i=0;i<n-1;i++)//for number of passes
    {
        printf("working on %d pass\n", i+1);
        isSorted=1;
        for(int j=0;j<n-1-i;j++)//for comparison in each pass
        {
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                isSorted=0;
            }
        }
        if(isSorted){
            return;
        }

    }
}

int main()
{
    int A[]={11,44,55,66,22,45,67,78,33};
    //int A[]={1,2,3,4,5,6,7,8,9};
    int n = 9;
    printArray(A,n);//printing the array before sorting
    AdaptivebubbleSort(A,n);
    printArray(A,n);//printing th array after sorting
    return 0;
}