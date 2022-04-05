#include<iostream>
#include<cmath>
using namespace std;

int DecimalToOctal(int n){
	int rem, i = 1, octalNumber = 0;
    while (n != 0)
    {
        rem = n % 8;
        n /= 8;
        octalNumber += rem * i;
        i *= 10;
    }
    return octalNumber;
}
int main() {
	int n;
	cin>>n;
	cout<<DecimalToOctal(n)<<endl;
	return 0;
}