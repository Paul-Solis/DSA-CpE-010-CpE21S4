#include <iostream>
using namespace std;

int main() {
   
    int numbers[] = {5, 4, 3, 2, 1};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Original array: ";
    for(int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < n / 2; i++) {
        int temp = numbers[i];
        numbers[i] = numbers[n - 1 - i];
        numbers[n - 1 - i] = temp;
    }

    cout << "Reversed array: ";
    for(int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
    
