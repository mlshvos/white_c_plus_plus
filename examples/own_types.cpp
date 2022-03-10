#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

struct Person {
    string name;
    string surname;
    int age;
};

int main() {
    vector<Person> staff;

    staff.push_back({"Ilya", "Levushkin", 22});
    staff.push_back({"Dima", "Nemturif", 223});

    cout << staff[0].name;
    return 0;
}