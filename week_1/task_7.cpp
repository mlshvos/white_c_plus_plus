#include <iostream>
#include <string>

using namespace std;

int main() {
    string sub;

    cin >> sub;

    int counter = 0;
    for (int i = 0; i < sub.size(); ++i) {
        if (sub[i] == 'f') {
            counter += 1;
            if (counter == 2) {
                cout << i;
                break;
            }
        }
    }
    if (counter == 1) {
        cout << -1;
    } else if (counter == 0) {
        cout << -2;
    }

    return 0;
}