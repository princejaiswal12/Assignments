#include<iostream>
#include<vector>
#include <algorithm>  
using namespace std;
string bin = "";
string reversed(int n){
    if(n==0){
        reverse(bin.begin(),bin.end());
        return bin;
    }
    bin += to_string(n%10);
    return reversed(n/10);
}
int main() {
    int n;
    cout<<"input number";
    cin>>n;
    cout<<reversed(n);
    return 0;
}