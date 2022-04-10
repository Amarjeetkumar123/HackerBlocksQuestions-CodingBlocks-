#include<iostream>
using namespace std;
int main() {
	long long n;
	cin>>n;
	int a=0,b=1,c=0, i =0;

	while(i<n-1){
		c = a +b;
		a =b;
		b=c;

	i++;
	}
	cout<<c;
	cout<<endl;
	return 0;
}