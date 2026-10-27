#include <iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void boubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
        if (arr[j]>arr[j+1])
        swap(&arr[j],&arr[j+1]);
}
void printarry (int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<< endl;
}
int main(){
int n,x,i;
cout<<"enter the size of array"<<endl;
cin>>n;
int arr[n];
cout<<"enter element"<<endl;
for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    boubblesort(arr,n);
    printarry(arr,n);
}
