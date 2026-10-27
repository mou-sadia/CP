#include <iostream>
using namespace std;
int leapyear(int year){
if (year%4==0 || year%100==0 || year%400==0)// jehetu leap year 4 year por por hoy tai 4 diye vag
    {
       return true;
    }
    else {
       return false;
    }
}
int main (){
int year;
cin>>year;
if (leapyear(year))
    {
        cout<<"it's leap year"<<endl;
    }
    else {
        cout<<"not yeap yeae"<<endl;
    }
}


