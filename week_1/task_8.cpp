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
        int res = 1;
        int end = (min(x, y) / 2) + 1;
        for (int i = 2; i <= end; ++i) {
            if (x % i == 0 && y % i == 0) {
                res = i;
            }
        }
        cout << res;
    }

    return 0;
}