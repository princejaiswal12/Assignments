#include <iostream>
using namespace std;
int count = 0;
int countdigit(int n){
    if(n==0) return count;
    count++;
    return countdigit(n/10);
}
int main() {
    int n;
    cin>>n;
    cout<<countdigit(n);
    return 0;
}