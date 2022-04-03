#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<j<<"\t";
		}
		for(int k=1; k<=((n-i)*2)-1; k++){
			cout<<" "<<"\t";
		}
		for(int l=i;l>=1;l--) {
        if(l!=n)
      	cout<<l<<"\t";
    	}
		cout<<"\n";
	}
	return 0;
}