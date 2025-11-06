#include<iostream>
#include<vector>
using namespace std;
int count = 0;
int countzero(int n){
    if(n==0) return count;
    if(n%10==0) count++;
    return countzero(n/10);
}
int main() {
    int n;
    cout<<"input number";
    cin>>n;
    cout<<countzero(n);
    return 0;
}