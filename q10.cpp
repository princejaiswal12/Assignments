#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* vectorToList(const vector<int>& arr) {
    if (arr.empty()) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for (int i = 1; i < arr.size(); i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
    if (!a) return b;
    if (!b) return a;

    if (a->val <= b->val) {
        a->next = mergeTwoLists(a->next, b);
        return a;
    } else {
        b->next = mergeTwoLists(a, b->next);
        return b;
    }
}

// Print linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n, m;
    vector<int> a, b;

    cout << "Enter size of first sorted vector: ";
    cin >> n;
    cout << "Enter elements: ";
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << "Enter size of second sorted vector: ";
    cin >> m;
    cout << "Enter elements: ";
    b.resize(m);
    for (int i = 0; i < m; i++) cin >> b[i];

    ListNode* l1 = vectorToList(a);
    ListNode* l2 = vectorToList(b);

    ListNode* merged = mergeTwoLists(l1, l2);

    cout << "\nMerged Linked List: ";
    printList(merged);

    return 0;
}
