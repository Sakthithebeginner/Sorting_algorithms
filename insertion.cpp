#include <iostream> 
using namespace std; 
  
//function to sort the array
void insertionSort(int a[], int n)  
{  
    int p,j,temp;
    for(p=1;p<n;p++)
    {
        temp=a[p];
        for(j=p;a[j-1]>temp&&j>0;j--)
        {
            a[j]=a[j-1];
        }
        a[j]=temp;
    }
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
    cout<<"---INSERTION SORT---"<<endl;
    cout<<"Enter the no of elements:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    insertionSort(a,n);  
    cout<<"Sorted array: \n";  
    printArray(a,n);  
    return 0;  
}  
