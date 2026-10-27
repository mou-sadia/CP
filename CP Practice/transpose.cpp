#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    int n;
    cout <<"input row col"<<endl;
    cin>>m;
    cin>>n;
    int a[m][n];
    int b[m][n];
    cout<<"matrix 1"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
    }
    }
    cout<<"matrix 2"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
    }
    }
   int result[m][n];
   for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

                result[i][j] = a[i][j]*b[j][i];

    }
   }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<result[i][j]<<" ";
    }
    cout << endl;
    }

}
