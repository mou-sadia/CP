#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cout<<"input number"<<endl;
cin>>n;
cin>>m;
int arr[n][m];
cout<<"1st"<<endl;
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
    cin>>arr[i][j];}
}
cout<<" 1st output"<<endl;
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
    cout<<arr[i][j]<< " ";}
}
cout<< endl;

cout<<"2nd"<<endl;
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
    cin>>arr[i][j];}
}
cout<< endl;

cout<<" 2nd output"<<endl;
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
    cout<<arr[i][j]<< " ";
}
  cout<< endl;
}
int multi[i][j] =0;
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            multi[i][j] += arr[i][j]*arr[i][j];
        }
cout<<" multiplication"<<endl;
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
    cout<<multi[i][j]<< " ";
    cout<<multi[i][j]<< " ";
}
  cout<< endl;
}


}
}

