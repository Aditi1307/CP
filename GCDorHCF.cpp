#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int hcf = 1;
    for (int i = min(x, y) ; i >0; i--){
        if(x%i== 0  && y%i == 0){
            hcf = i;
            break;
        }
    }
    cout << "HCF or GCD is " << hcf;
}


/*

#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}
int main()
{

	int a = 4, b = 8;
	cout <<"The GCD of the two numbers is "<<gcd(a, b);
}

*/