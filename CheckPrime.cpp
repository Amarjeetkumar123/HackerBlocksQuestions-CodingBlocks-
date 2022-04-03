#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int i=2;
	while(i<n){
	if(n%2==0){
		cout<<"Not Prime";
		return 0;
	}
	i++;
	}
	cout<<"Prime";

	return 0;
}