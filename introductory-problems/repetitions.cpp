#include<iostream>
#include<string>

using namespace  std;

int repetitions(const string& str) {
    int maxCount = 1;
    int count = 1;
    for(int i = 0; i < str.length() - 1; i++) {
        if (str[i] != str[i + 1]) {
            maxCount = max(maxCount, count);
            count = 1;
            continue;
        }
        count++;
    }
    return max(maxCount, count);
}

int main() {
    string str;
    cin >> str;
    cout << repetitions(str) << endl;
    return 0;
}
