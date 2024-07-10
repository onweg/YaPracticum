#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void sort_(const int count, vector<pair<int, string> >& peoples);
string test1();
string test2();
string test3();

int main() {
    cout << test1() << endl;
    cout << test2() << endl;
    cout << test3() << endl;
}

void sort_(vector<pair<int, string> >& peoples) {
    sort(peoples.begin(), peoples.end(), [](pair<int, string> a, pair<int, string> b){return a.first == b.first ? a.second < b.second : a.first > b.first;});
    return;
}

string test1() {
    const int count = 2;
    vector<pair<int, string> > peoples = {{ 1, "John"}, {1, "Jack"}};
    vector<pair<int, string> > answer = {{1, "Jack"}, {1, "John"}};
    sort_(peoples);
    for (int i = 0; i < count; i++) {
        if (peoples[i] != answer[i])
            return "FAIL";
    }
    return "SUCCESSFUL";
}

string test2() {
    const int count = 2;
    vector<pair<int, string> > peoples = {{1, "Jack"}, {1, "John"}};
    vector<pair<int, string> > answer = {{1, "Jack"}, {1, "John"}};
    sort_(peoples);
    for (int i = 0; i < count; i++) {
        if (peoples[i] != answer[i])
            return "FAIL";
    }
    return "SUCCESSFUL";
}

string test3() {
    const int count = 5;
    vector<pair<int, string> > peoples = {{1, "A"}, {3, "AA"}, {3, "C"}, {100, "A"}, {3, "A"}};
    vector<pair<int, string> > answer = {{100, "A"}, {3, "A"}, {3, "AA"}, {3, "C"}, {1, "A"}};
    sort_(peoples);
    for (int i = 0; i < count; i++) {
        if (peoples[i] != answer[i])
            return "FAIL";
    }
    return "SUCCESSFUL";
}
