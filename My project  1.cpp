#include <iostream>
#include <string>
using namespace std;

void printTableHeader() {
    cout << "\n\n\t\t\tMultiplication From 1 To 10\n\n";
    cout << "\t\t";
    for (int i = 1; i <= 10; i++) {
        cout << i << "\t";
    }
    cout << "\n---------------------------------------------------------------------------------------\n";
}

string column(int i) {
    if (i <= 10) {
        return "\t  |";
    }
    else {
        return "\t|";
    }
}

void PrintMultiplicationTable() {
    printTableHeader();
    for (int i = 1; i <= 10; i++) {
        cout << i << column(i) << "\t";
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}

int main() {

    PrintMultiplicationTable();
    return 0;
}