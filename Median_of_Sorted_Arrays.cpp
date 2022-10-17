#include<iostream>
using namespace std;
#include<algorithm>
int main() {
	int n;
	cin>>n;
	int a[2*n],b[2*n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	cin>>b[i];

	for(int i=n;i<2*n;i++)
	a[i]=b[i-n];

	sort(a,a+2*n);
	
	int median=a[n-1];
	cout<<median<<endl;
	return 0;
}