#include<bits/stdc++.h>
using namespace std;
int main() {
   int n;
    cout <<"input number"<<endl;
    cin>>n;
    int arr[n];
    int diagonal[n][n]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        diagonal[i][j]=i+1;}
    }
cout<<"output"<<endl;
for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
    cout<<diagonal[i][j]<<"";
       }
    }

          cout<<endl;


    return 0;
}
