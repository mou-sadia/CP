#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    char x;
    cin>>a;
    cin>>x;
    cin>>b;
    if(x=='+'){
        cout<<"Addition" <<a+b<<endl;
    }
    else if (x=='-'){
        cout <<"Subtraction"<<a-b<<endl;

    }
    else if (x=='*')
   {
       cout <<"Multiplication"<<a*b<<endl;

   }
   else if (x=='/'){
    cout <<" Division"<<a/b<<endl;
   }
   else
   {
       cout <<"no result"<<endl;

   }
   return 0;
}
