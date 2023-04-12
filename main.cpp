#include <iostream>
#include <map>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int sum;
    map<int, int> m;
    for (int i = 0; i < 1000; i++) {
        sum = rand() % 6 + 1 + rand() % 6 + 1;
        cout << sum << " ";
        if ((i + 1) % 10 == 0) cout << endl;
        m[sum] += 1;
    }
    for (auto elem : m) {
        cout << "Key " << elem.first << ", value " << elem.second << endl;
    }
}
