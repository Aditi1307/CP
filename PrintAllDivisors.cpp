//Given a number, print all the divisors of the number. A divisor is a number that gives the remainder as zero when divided.

#include<bits/stdc++.h>
using namespace std;

void divisors(int n){
    for (int i = 1; i <= sqrt(n);i++){
        if(n%i == 0)
            cout << i<<" ";
    }
    cout << n;
}

int main(){
    int x;
    cin >> x;
    divisors(x);
    
}
