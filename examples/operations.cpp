#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> a = {"a", "b", "c"};
    vector<string> b = a;
    b[0] = "c";
    cout << (b[0] == a[0]); // false, cuz b full copied a
}