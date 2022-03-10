#include <iostream>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if (A % 2 != 0) {
        A += 1;
    }

    for (int i = A; i <= B; i += 2) {
        cout << i << " ";
    }
    return 0;
}