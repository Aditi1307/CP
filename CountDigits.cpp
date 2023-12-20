#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
    int digits = floor(log10(n) + 1);
    return digits;
}

int NumtoStr(int n){
    string str = to_string(n);
    return str.length();
}
int main(){
    int x;
    cin >> x;

    // Using loop to count digits
    int count = 0;
    int temp = x;  // Store the original value of x

    while(temp){
        temp = temp / 10;
        count++;
    }

    // Output the count obtained from the loop
    cout << "Count using loop: " << count << endl;

    // Using the countDigits function
    int digits = countDigits(x);
    cout << "Count using log10: " << digits << endl;

    // Using Number to String method
    cout << "Count using string: " << NumtoStr(x);

    return 0;
}
