#include<stdio.h>
void printArray(int *A,int n)
{
    printf("The elements of Array are:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");

}
void selectionSort(int *A, int n)
{
    int indexofMin, temp;
    printf("running Selection Sort...\n");
    for(int i=0; i<n-1 ; i++){
        indexofMin=i;
        for(int j=i+1;j<n;i++){
            if(A[j]<A[indexofMin]){
                indexofMin=j;
            }
        }
        //swapping a[i] and a[indexofMin]
        temp=A[i];
        A[i]=A[indexofMin];
        A[indexofMin]=temp;
    }
}
int main()
{
    int A[]={44,2,1,41,6,88,9,10};
    int n=8;
    printArray(A,n);
    selectionSort(A,n);
    printArray(A,n);
    return 0;
}