#include <iostream>
using namespace std;

int min_cost(int n, int a, int b) {
    int cost1 = n * a;
    int cost2 = (n / 2) * b + (n % 2) * a;
    return min(cost1, cost2);
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        cout << min_cost(n, a, b) << '\n';
    }
}
