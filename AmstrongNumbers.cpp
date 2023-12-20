#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int x){
    int temp = x;
    int sum = 0;
    string str = to_string(temp);
    int count = str.length();
    while(temp){
        int remain = temp % 10;
        sum += round(pow(remain, count));//      // pow() returns a double value
      // round() returns the equivalent int

        temp = temp / 10;
    }
    return (sum == x);
}

int main(){
    int x;
    cin >> x;
    if(isArmstrong(x)){
        cout << x << " is an Armstrong number";
    }else
        cout << x << " is not an Armstrong number";
}
