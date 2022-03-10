#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int x, y;

    cin >> x >> y;

    int res = 1;
    for (int i = 2; i <= (x / 2) + 1; ++i) {
        if (x % i == 0) {
            x /= i;
            if (y % i == 0) {
                y /= i;
                res *= i;
            }
        }
    }
    cout << res;
    return 0;
}