#include <iostream>
#include <string>
#include <windows.h>
#include <cmath>

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string napr;
    int povorot;
    cin >> napr >> povorot;

    if (napr == "С") {
        if (povorot == 0) {
            napr = "С";
        }
        if (povorot == 1) {
            napr = "З";
        }
        if (povorot == -1) {
            napr = "В";
        }

        cout << napr;
        return 0;
    }

    if (napr == "З") {
        if (povorot == 0) {
            napr = "З";
        }
        if (povorot == 1) {
            napr = "Ю";
        }
        if (povorot == -1) {
            napr = "С";
        }

        cout << napr;
        return 0;
    }

    if (napr == "В") {
        if (povorot == 0) {
            napr = "В";
        }
        if (povorot == 1) {
            napr = "С";
        }
        if (povorot == -1) {
            napr = "Ю";
        }

        cout << napr;
        return 0;
    }

    if (napr == "Ю") {
        if (povorot == 0) {
            napr = "Ю";
        }
        if (povorot == 1) {
            napr = "В";
        }
        if (povorot == -1) {
            napr = "З";
        }

        cout << napr;
        return 0;
    }

}