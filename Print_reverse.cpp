#include<iostream>
using namespace std;
int main() {
	int n , digit=0, res=0;
	cin>>n;
	while(n!=0){
		digit = n%10;
		res = res*10+digit;
		n=n/10;
	}
	cout<< res;
	return 0;
}