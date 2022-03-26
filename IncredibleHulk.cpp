#include<iostream>
using namespace std;

int main() {
	int t,n,ans;
	cin>>t;
	while(t>0){
		cin>>n;
		ans=0;
		while(n>0){
			if(n&1){
				ans++;	
			}
            n=n>>1;
		}
		cout<<ans<<endl;
        t--;
	}
	return 0;
}