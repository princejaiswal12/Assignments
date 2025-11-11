class Solution {
public:
    //merge sort
    void merge(vector<int>& a,vector<int>& b,vector<int>& v,int i,int j,int k){
        if(k==a.size()+b.size()) return;
        if(i==a.size()){
            v[k] = b[j];
            merge(a,b,v,i,j+1,k+1);
        }
        else if(j==b.size()){
            v[k] = a[i];
            merge(a,b,v,i+1,j,k+1);
        }
        else if(a[i]<b[j]){
            v[k] = a[i];
            merge(a,b,v,i+1,j,k+1);
        }
        else{
            v[k] = b[j];
            merge(a,b,v,i,j+1,k+1);
        }
    }

    vector<int> sortArray(vector<int>& v) {
        int n = v.size();
        if(n==1) return v;
        int n1 = n/2;
        int n2 = n - n/2;
        vector<int> a(n1),b(n2);
        //copy pasting
        for (int i = 0; i < n1; i++)
            a[i] =  v[i];
        for (int i = 0; i < n2; i++)
            b[i] = v[n1+i];
        //magic happens here
        sortArray(a);
        sortArray(b);
        //merge
        merge(a,b,v,0,0,0);
        a.clear();
        b.clear();
        return v;
    }
};