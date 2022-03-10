#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int x, y;

    cin >> x >> y;

    int res = 1;
    int i = 2;
    while (x > 1) {
        if (x % i == 0) {
            x /= i;
            if (y % i == 0) {
                y /= i;
                res *= i;
            }
        } else {
            i++;
        }
    }
    cout << res;
    return 0;
}