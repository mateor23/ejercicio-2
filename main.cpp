#include <iostream>

using namespace std;

int main()
{
    char letra;
    for (int i = 0;i < 7; i++) {
        letra ='A';
        for (int j = 0;j <= i; j++) {
            cout << letra << ' ';
            letra = letra + 1;
        }
        for (int j = 0; j < 11-2*i; j++) {
            cout << ". ";
        }
        letra = 'A' + i;
        for ( int j = i; j>=0; j--) {
            if (letra != 'G') cout << letra << ' ';
            letra = letra - 1;
        }
        cout << '\n';
    }
    for (int i=5; i >= 0; i--) {
        letra = 'A';
        for (int j = 0; j<=i; j++) {
            cout << letra << ' ';
            letra = letra + 1;
        }
        for (int j = 0; j < 11-2*i; j++) {
            cout << ". ";
        }
        letra = 'A' + i;
        for ( int j = i; j>=0; j--) {
            if (letra != 'G') cout << letra << ' ';
            letra = letra - 1;
        }
        cout << '\n';
    }

    return 0;
}
