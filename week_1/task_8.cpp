#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y;

    cin >> x >> y;

    if (x % y == 0) {
        cout << x;
    } else if (y % x == 0) {
        cout << y;
    } else {
        int end = 1;
        int start = (int) sqrt(x);
        for (int i = end; i >= start; i -= 1) {
            if (x % i == 0 && y % i == 0) {
                cout << i;
            }
        }
    }

    return 0;
}