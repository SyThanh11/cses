#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int apartment(vector<int>& applicants, vector<int>& apartments, int k) {
    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());

    int i = 0, j = 0, result = 0;
    int n = applicants.size(), m = apartments.size();

    while (i < n && j < m) {
        if (abs(applicants[i] - apartments[j]) <= k) {
            result++;
            i++;
            j++;
        } else if (apartments[j] < applicants[i] - k) {
            j++;
        } else {
            i++;
        }
    }

    return result;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> applicants(n);
    vector<int> apartments(m);
    for (int i = 0; i < n; i++) {
        cin >> applicants[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> apartments[i];
    }
    cout << apartment(applicants, apartments, k) << endl;
    return 0;
}
