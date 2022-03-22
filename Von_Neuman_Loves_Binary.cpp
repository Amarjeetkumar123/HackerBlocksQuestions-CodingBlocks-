#include<iostream>
#include<cmath>
using namespace std;

// Function..
int convert(int b){
	int dec = 0 , i=0 , rem;
	while(b!=0){
		rem = b%10;
		b/=10;
		dec += rem * pow(2,i);
		++i;
	}
	return dec;
}

int main() {
	int n , i = 0;
	int b;
	// Input number of terms...
	cin>>n;

	// Input binary number...

	while(i<n){
		cin>>b;
		cout<<convert(b)<<endl;
		i++;
	}
	
	return 0;
}