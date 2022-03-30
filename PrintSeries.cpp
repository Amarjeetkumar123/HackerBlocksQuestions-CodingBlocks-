#include<iostream>
using namespace std;
int main() {
	int n1,n2,res=0,i=1,c=1;
	cin>>n1>>n2;
	while(c<=n1){
		res = (3*i)+2;
		i++;
		if(res%n2!=0){
			cout<<res<<endl;
			c++;
		}
	}
	return 0;
}