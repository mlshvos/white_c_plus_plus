#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y;

    cin >> x >> y;

    int a = min(x, y);
    int b = max(x, y);

    int res = 1;
    int i = 2;
    while (a > 1) {
        if (a % i == 0) {
            a /= i;
            if (b % i == 0) {
                b /= i;
                res *= i;
            }
        } else {
            i++;
        }
    }
    cout << res;
    return 0;
}