#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int count;
    cin >> count;
    vector<pair<int, string>> peoples;
    for (int i = 0; i < count; ++i) {
        string name;
        int age;
        cin >> name >> age;
        // сохраните в вектор пар
        peoples.push_back({age, name});
    }
    
    sort(peoples.begin(), peoples.end(), [](pair<int, string> a, pair<int, string> b){return a.first == b.first ? a.second < b.second : a.first > b.first;});
    
    for (const pair<int, string>& p : peoples) {
        cout << p.second << endl;
    }
    // выведите только имена в порядке убывания возраста
    // Jack
    // John
    // ...
}
