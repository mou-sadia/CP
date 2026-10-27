#include<bits/stdc++.h>
using namespace std;
int main(){
        int a,b;
        cin>>a;
        cin>>b;
        int multi=0;
        for(int i=a;i<=b;i++){
                     if (a%2!=0&&b%2!=0){
                multi = multi*i;
            }
        }
   cout << multi <<endl;

}
