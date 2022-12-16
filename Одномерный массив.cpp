#include <iostream>

using namespace std;

int main() {

    float arr[] = { 1, -2, 0.3, 1.13546, -228 };
    bool prev_state;

    if (arr[0] > 0) prev_state = 1;
    else prev_state = 0;


    for (int counter = 1; counter < size(arr) - 1; counter++) {
        if (prev_state) {
            if (arr[counter] < 0) prev_state = 0;
            else {
                cout << "Stopped at " << arr[counter] << endl;
                return 0;
            }
        }

        else {
            if (arr[counter] > 0) prev_state = 1;
            else {
                cout << "Stopped at " << arr[counter] << endl;
                return 0;
            }
        }
    }

    cout << "All is good" << endl;
}
