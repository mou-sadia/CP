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
    cout<<arr[i]<< endl;
}
int sum=0;
for(int i=0;i<n;i++){
    sum += arr[i];
}
cout <<"sum"<<sum<<endl;
}

