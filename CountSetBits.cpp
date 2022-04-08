#include<iostream>
using namespace std;
int main(){
	int n , i=0;
	cin>>n;
	while(i<n){
		int num;
		cin>>num;
    	int c=0;
		while(num>0){
			int result = (num & 1);
			if(result == 1){
				c++;
			}
			num = num>>1;
		}
		cout<<c<<endl;
		i++;
	}
	return 0;
}