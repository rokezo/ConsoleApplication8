#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int arr[10]; 
    arr[0] = n;

    for (int i = 1; i < 10; i++) {
        arr[i] = arr[i - 1] + 1;
    }

    cout << "Created array: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}