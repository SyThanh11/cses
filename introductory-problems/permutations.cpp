#include<iostream>

using namespace std;

void permutation(int n) {
    if(n == 1) {
        cout << 1 << endl;
        return;
    }
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
        return;
    }
    if (n == 4) {
        cout << "2 4 1 3";
        return;
    }

    for (int i = 1; i <= n; i+=2) {
        cout << i << " ";
    }

    for (int i = 2; i <= n; i+=2) {
        cout << i << " ";
    }
}

int main() {
    int n;
    cin >> n;

    permutation(n);
    return 0;
}