#include<iostream>
using namespace std;
int main() {
	int n ,temp=0;
	cin>>n;
	int a , b;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		int c = 0;
	for(int j=a;j<=b;j++){
		temp = j;
		while(temp>0){
			int result = (temp & 1);
			if(result == 1){
				c++;
			}
			temp = temp>>1;
		}
	}
	cout<<c<<endl;
	}

	return 0;
}