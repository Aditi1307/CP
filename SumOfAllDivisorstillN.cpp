//Given a number, print all the divisors of the number. A divisor is a number that gives the remainder as zero when divided.

#include<bits/stdc++.h>
using namespace std;


int mod = 1000000007;
  

int linearSum(int n)
{
    return (n * (n + 1) / 2) % mod;
}
  

int rangeSum(int b, int a)
{
    return (linearSum(b) - 
            linearSum(a)) % mod;
}



int sumOfAllDivisors(int n){

    int result = 0;
    int i = 1;
  

    while(true)
    {

        result += rangeSum(n / i, n / (i + 1)) * 
                          (i % mod) % mod;
          
        result %= mod;
         
        if (i == n)
            break;
             
        i = n / (n / (i + 1));
    } 
    return result;

}
// void divisors(int n){
//     int sum = 0;
//     for (int i = 1; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             sum += i;
//             if (i != n / i) {
//                 sum += n / i;
//             }
//         }
//     }
//     cout<<sum;
// }

int main(){
    int x;
    cin >> x;
    cout<<sumOfAllDivisors(x);
    
}
