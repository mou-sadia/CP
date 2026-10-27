#include<bits/stdc++.h>
using namespace std;
int main(){
int score;
cin>>score;
if (score>=90){
    cout <<"grade A"<<endl;
}
else if (80<score<=89){
    cout <<"grade B"<<endl;
}
else if (70<score<=79){
    cout <<"grade C"<<endl;
}
  else if (score<=70){
    cout <<"grade Fail"<<endl;
}
return 0;
}






