#include <iostream>
using namespace std;
 int evencount(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
if (arr[i]%2==0)
            count++;
    }
    return count;
}
int oddcount(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
if (arr[i]%2!=0)
            count++;
    }
    return count;
}

int main() {
    int n;
 cin >> n;
 int arr[n];
for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

 cout << "The even count  array number: " << evencount(arr,n) << endl;
 cout << "The odd count  array number: " << oddcount(arr,n) << endl;

    return 0;
}


