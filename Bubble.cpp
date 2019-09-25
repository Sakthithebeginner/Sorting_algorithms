#include <iostream> 
using namespace std; 
  
//function to swap the elements
void swap(int *x, int *y)  
{  
    int t = *x;  
    *x = *y;  
    *y = t;  
}  
  
//function to sort the array
void bubbleSort(int a[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)       
    for (j = 0; j < n-i-1; j++)  
        if (a[j] > a[j+1])  
            swap(&a[j], &a[j+1]);  
}  
  
//Printing the array
void printArray(int a[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << a[i] << " ";  
    cout << endl;  
}  
  
//main function 
int main()  
{  
    int n,i;
    cout<<"---BUBBLE SORT---"<<endl;
    cout<<"Enter the no of elements:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubbleSort(a,n);  
    cout<<"Sorted array: \n";  
    printArray(a,n);  
    return 0;  
}  
