#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"input number"<<endl;
cin>>n;
int arr[n];
cout<<"1D"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"output"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
int largest=arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
}
cout<<"largest  :"<<largest<<endl;
}
