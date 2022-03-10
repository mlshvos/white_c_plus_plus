#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {
    int x = -5;
    double pi = 3.14;
    bool a = true;
    char symb = 'a';

    string hw = "Hello, world!";

    vector<int> nums = {1, 3, 5, 7};
    cout << nums.size();

    map<string, int> name_to_value;
    name_to_value["one"] = 1;
    name_to_value["two"] = 2;

    cout << name_to_value["two"];
    return 0;
}