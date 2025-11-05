#include <iostream>
#include <vector>
using namespace std;
void reverseVector(vector<int>& v, int i, int j) {
    if (i >= j) return;
    swap(v[i], v[j]);
    reverseVector(v, i + 1, j - 1);
}
int main() {
    int n; 
    cout << "Enter size of vector: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    // Reverse using recursion
    reverseVector(v, 0, n - 1);

    for (int x : v) cout << x << " ";

    return 0;
}
