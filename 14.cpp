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
for(int i=0;i<n;i++){
    cout<<arr[i]<< endl;
}
cout<< endl;
int m;
cout<<"input number"<<endl;
cin>>m;
int arr[m];
cout<<"1D"<<endl;
for(int i=0;i<m;i++){
    cin>>arr[i];
}
cout<<" 2nd output"<<endl;
for(int i=0;i<m;i++){
    cout<<arr[i]<< endl;
}
int result[n+m];

for(int i=0;i<n;i++){
        result = arr[i] arr[i];
}
for(int i=0;i<n;i++){
    cout<<result<< endl;
}


}

