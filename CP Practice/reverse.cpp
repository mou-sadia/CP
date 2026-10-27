#include <iostream>
using namespace std;
int reverse(int arr[],int a){
 for (int i=a-1;i>=0;--i)
 {
    cout<<arr[i];
 }
 cout <<endl;
}
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
     reverse(arr,a);
}



