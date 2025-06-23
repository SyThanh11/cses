#include<iostream>

using namespace std;

void weirdAlgorithm(long long& number) {
    cout << number;
    while (number != 1) {
        if (number % 2 == 0) {
            number = number/2;
        } else number = number * 3 + 1;
        cout << " " << number;
    }
}

int main(){
    long long number;
    cin >> number;
    weirdAlgorithm(number);

    return 0;
}

