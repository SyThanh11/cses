#include <iostream>
#include <set>
#include <vector>

using namespace std;

// Hàm xử lý yêu cầu mua vé
void concertTickets(vector<int>& prices, vector<int>& tickets) {
    multiset<int> availableTickets(prices.begin(), prices.end()); // Tập vé ban đầu

    for (int price : tickets) {
        auto it = availableTickets.upper_bound(price); // Tìm vé đầu tiên > giá mua
        if (it == availableTickets.begin()) {
            cout << -1 << endl; // Không có vé nào <= giá người mua
        } else {
            --it; // Lùi lại để lấy vé <= giá
            cout << *it << endl; // In ra giá vé được bán
            availableTickets.erase(it); // Xóa vé đã bán
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> prices(n), tickets(m);
    for (int i = 0; i < n; i++) cin >> prices[i]; // Nhập giá vé
    for (int i = 0; i < m; i++) cin >> tickets[i]; // Nhập giá người mua sẵn sàng chi

    concertTickets(prices, tickets); // Gọi hàm xử lý

    return 0;
}
