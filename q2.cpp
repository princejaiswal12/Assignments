#include<iostream>
#include<vector>
using namespace std;
int mxe = INT32_MIN;
int mx(vector<int> &v,int i){
    mxe = max(mxe,v[i]);
    if(i==v.size()-1) return mxe;
    return mx(v,i+1);
}
int main() {
    int n;
    cout<<"input size of arr";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements \n";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<mx(v,0);
    return 0;
}