#include<iostream>
using namespace std;
int main() {
	int n,res=0,i=1,num;
	cin>>n;
	while(i<=n){
		cin>>num;
		res = res^num;
		i++;
	}
	cout<<res;
	return 0;
}