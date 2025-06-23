#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int ferrisWheel(vector<int> weights, int x) {
    sort(weights.begin(), weights.end());
    int result = 0;
    int left = 0;
    int right = weights.size() - 1;
    while (left <= right) {
        if (weights[left] + weights[right] <= x) {
            left++;
            right--;
        }
        else {
            right--;
        }
        result++;
    }

    return result;
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }
    cout << ferrisWheel(weights, x) << '\n';
    return 0;
}
