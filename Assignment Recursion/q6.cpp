#include<iostream>
#include<vector>
#include <algorithm>  
using namespace std;
string bin = "";
string dectobinary(int n){
    if(n==0){
        return "";
    }
    return dectobinary(n/2)+ to_string(n %2);
}
int main() {
    int n;
    cout<<"input number";
    cin>>n;
    cout<<dectobinary(n);
    return 0;
}