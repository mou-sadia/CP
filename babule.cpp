#include <iostream>
using namespace std;

void boubblesort(int arr[],int n)
{
    for(int i=1;i<n;i++){
            int key=arr[i];
    int j=i-1;
        while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
         j=j-1;
        }
        arr[j+1]=key;
}


}
int binary(int arr[],int left,int right,int value){
   if (right>=left)
   {
       int mid=left+(right-left)/2;
       if(arr[mid]==value)
        return mid;
       if(arr[mid]>value)
   }


}














void printarry (int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<< endl;
}

int main(){
int n,i;
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

