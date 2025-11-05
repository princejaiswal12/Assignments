#include<iostream>
#include<vector>
using namespace std;
bool sorted(vector<int> &v,int i){
    if(i==v.size()-1) return true;
    if(v[i-1]>v[i]) return false;
    sorted(v,i+1);
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
    cout<<sorted(v,1);
    return 0;
}