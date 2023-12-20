#include<bits/stdc++.h>
using namespace std;

bool palindrome(int N){
    if(N<0)
        return false;
    int Max_int = 2147483647;
    int Min_int = -2147483648;
    int rev = 0;
    int temp = N;
    while(temp){
        if(rev>Max_int/10 || rev<Min_int/10)
            return false;
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    if(rev == N)
        return true;
    return false;
}

int main(){
    int x;
    cin >> x;
    bool ispalindrome = palindrome(x);
    if(ispalindrome)
        cout << x << " is palindrome";
    else
        cout << x << " is not palindrome";
}

/*class Solution {

public:

    bool isPalindrome(int x) {

        if (x < 0) return false;

        long long a = x, b = 0;

        while (x) {

            b = b * 10 + x % 10;

            x /= 10;

        }

        return a == b;

    }

};

    
        
   */