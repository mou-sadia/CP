#include <iostream>
using namespace std;
 int smallnum(int arr[], int n) {
    int min= arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i]; }
    }
    return min;
}

int main() {
    int n;
 cin >> n;
 int arr[n];
for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

 cout << "The minimum number: " << smallnum(arr, n) << endl;

    return 0;
}

