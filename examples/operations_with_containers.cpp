#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm> // algo library

using namespace std;

/* comment
here
 */

int main() {
    string s = "abcdefg"; // same with vector
    for (char c: s) { // instead char can use auto for container types
        cout << c << ";";
    }

    map<string, int> b = {{"a", 1}, {"b", 2}, {"c", 3}};

    int sum = 0;
    string concat;
    for (auto i : b) {
        concat += i.first;
        sum += i.second;
    }
    
    int i = 10;
    do {
        cout << i << endl;
        --i;
    } while (i != 0);

    vector<int> nums = {1, 5, 2, 3, 5};
    int quantity = count(begin(nums), end(nums), 5); //count, sort from algorithm
    sort(begin(nums), end(nums));

    return 0;
}