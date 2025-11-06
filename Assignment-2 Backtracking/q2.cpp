class Solution {
  public:
    // Function to delete middle element of a stack.
    void helper(stack<int>& s,int n,int i){
        if(i==n){
            s.pop();
            return;
        }
        int a = s.top();
        s.pop();
        helper(s,n,i+1);
        s.push(a);
    }
    void deleteMid(stack<int>& s) {
        // code here..
        int n = s.size();
        helper(s,n/2,0);
    }
};