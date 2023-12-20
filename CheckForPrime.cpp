//Given a number, print all the divisors of the number. A divisor is a number that gives the remainder as zero when divided.

#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    for (int i = 2; i <= n / 2;i++){
        if(n%i == 0)
            return false;
    }
    return true;
}

int main(){
    int x;
    cin >> x;
    if(prime(x)) cout<<"Prime";
    else
        cout << "Not Prime";
}
