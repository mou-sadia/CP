#include <iostream>
using namespace std;

int largestnum(int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > largest) {
            largest = arr[i]; }
    }
    return largest;
}
 int secondlargest(int arr[], int n) {

    for (int i = 1; i < n; ++i) {
            int second= arr[i];
        if (arr[i] < largest && second >arr[i-1]) {
            second = arr[i]; }
    }
    return second;
}

int main() {
    int n;
 cin >> n;
 int arr[n];
for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }



cout << "The largest number: " << largestnum(arr, n) << endl;

 cout << "The largest number: " << secondlargest(arr, n) << endl;

    return 0;
}

