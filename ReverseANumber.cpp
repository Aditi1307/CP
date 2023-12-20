//Problem Statement: Given a number N reverse the number and print it.
#include<bits/stdc++.h>

using namespace std;

   int reverse(int x) {
        int rev = 0;
        int Max_int = 2147483647;
        int Min_int = -2147483648;
        while(x != 0){
            if(rev>Max_int/10 || rev<Min_int/10)
                return 0;
            rev = rev*10 +  x % 10;
            x = x/10;
        }
        return rev;
    }


    int main(){
    int x;
    cin >> x;
    cout << reverse(x);
    }
/*
int main(){
    int x;
    cin >> x;
    vector<int> arr;


  while(x){
      int remainder = x % 10;
      arr.push_back(remainder);
      x = x / 10;
    }

    for(int ele: arr){
        cout << ele;
    }
}
*/



// int main(){
//     int N;
//     cin>>N;
//     int reverse = 0;
//     while(N != 0){
//         int digit = N%10;
//         reverse = reverse*10 + digit;
//         N = N/10;
//     }
//     cout<<reverse;
// }


