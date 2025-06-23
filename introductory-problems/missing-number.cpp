#include<iostream>
#include<vector>

using namespace std;

long long missingNumber(const int& number,const vector<int> &arr) {
    long long result = 1LL*number*(number+1)/2;
    for (int const num: arr) {
        result -= num;
    }
    return result;
}

int main() {
    int number;
    cin>>number;
    vector<int> arr;
    for(int i = 0; i < number-1; i++) {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    cout << missingNumber(number,arr) << endl;
    return 0;
}