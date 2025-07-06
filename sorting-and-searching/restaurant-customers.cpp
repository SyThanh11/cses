#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int restaurantCustomers(vector<pair<int, int>>& times) {
    vector<pair<int, int>> events;

    for (auto& time : times) {
        events.push_back({time.first, 1});  // Khách đến
        events.push_back({time.second, -1}); // Khách rời
    }

    // Sắp xếp: nếu cùng thời điểm thì rời trước đến
    sort(events.begin(), events.end());

    int current = 0;
    int maxCustomers = 0;

    for (auto& e : events) {
        current += e.second;
        maxCustomers = max(maxCustomers, current);
    }

    return maxCustomers;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> times(n);
    for (int i = 0; i < n; ++i) {
        cin >> times[i].first >> times[i].second;
    }

    cout << restaurantCustomers(times) << endl;
    return 0;
}
