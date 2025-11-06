#include<iostream>
#include<vector>
using namespace std;
bool isDigit(string s,int i){
    if(i==s.size()) return true;
    if(s[i]<48 || s[i]>57) return false;
    return isDigit(s,i+1);
}
int main() {
    string s;
    cout<<"input string ";
    // cin>>s;
    getline(cin,s);
    cout<<isDigit(s,0);
    return 0;
}