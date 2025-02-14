#include<stdio.h>

void printArray(int *A,int n)
{
    printf("The elements of Array are:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");

}
void insertionSort(int *A,int n)
{
    int key , j;
    for(int i=1;i<n;i++)//loop for passes
    {
        key=A[i];
        j=i-1;
        while(j >=0 && A[j] > key)
        {
            A[j+1] =A[j];
            j--;
            
        }
        A[j+1]= key;
        

    }
}
int main()
{
    int A[]={3,10,1,6,7,90,43,22};
    int n=8;
    printArray(A,n);
    insertionSort(A,n);
    printArray(A,n);
    return 0;
}