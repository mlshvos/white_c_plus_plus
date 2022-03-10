#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y;

    cin >> x >> y;

    if (x % y == 0) {
        cout << y;
    } else if (y % x == 0) {
        cout << x;
    } else {
        int end = 1;
        int start = (int) (min(x, y) / 2);
        for (int i = start; i >= end; i -= 1) {
            if (x % i == 0 && y % i == 0) {
                cout << i;
            }
        }
    }

    return 0;
}