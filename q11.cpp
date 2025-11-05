#include <iostream>
#include <vector>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* vectorToList(vector<int>& arr) {
    if (arr.empty()) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for (int i = 1; i < arr.size(); i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

ListNode* reverseList(ListNode* head) {
    if (!head || !head->next) return head;

    ListNode* newHead = reverseList(head->next);

    head->next->next = head;
    head->next = NULL;

    return newHead;  
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr;
    int n;

    cout << "Enter number of elements: ";
    cin >> n;
    arr.resize(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    ListNode* head = vectorToList(arr);

    head = reverseList(head);

    printList(head);

    return 0;
}