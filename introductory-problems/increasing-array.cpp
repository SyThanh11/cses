#include<iostream>
#include<vector>

using namespace std;

long long increasingArray(vector<int>& arr) {
    int n = arr.size();
    long long minimumMove = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i+1] < arr[i]) {
            minimumMove += arr[i] - arr[i+1];
            arr[i + 1] = arr[i];
        }
    }
    return minimumMove;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout<<increasingArray(arr);
    return 0;
}