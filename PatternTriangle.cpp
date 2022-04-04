#include<iostream>
using namespace std;
int main() {
	int n;
	
	cin>>n;

	for(int i=1;i<=n;i++){

		for(int j=1;j<=n-i;j++){
			cout<<"\t";
		}
		int num = i;
		for(int j=1;j<=i;j++){
			cout<<num<<"\t";
			num++;
		}

		int num2 = 2*i-2;

		for(int j=1;j<=i-1;j++){
			cout<<num2<<"\t";
			num2--;
		}
		cout<<"\n";
	}
	return 0;
}