#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1;
    cout << a << " " << b << " ";
    int i = 3;
    while (i <= n) {
        int temp = a + b;
        cout << temp << " ";
        a = b;
        b = temp;
        i++;
    }
}

int main() {
    int n;
    cout << "Ingrese el número de términos: ";
    cin >> n;
    fibonacci(n);
    return 0;
}


