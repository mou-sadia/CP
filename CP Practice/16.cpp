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
cout<<" 1st output"<<endl;
for(int i=n-1;i>=0;i--){
    cout<<arr[i]<< " ";
}
cout<< endl;

}

