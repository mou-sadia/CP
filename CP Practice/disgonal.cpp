#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    int n;
    cout <<"input row col"<<endl;
    cin>>m;
    cin>>n;
    int a[m][n];
   cout<<"matrix 1"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
    }
    }

   for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if(i==j){
            cout<<a[i][j];
           }
}
    }

 return 0;

}

