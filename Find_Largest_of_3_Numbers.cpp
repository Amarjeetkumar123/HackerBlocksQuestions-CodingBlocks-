#include<iostream>
#include<climits>
using namespace std;
int main() {
	int n , i=1;
	int max = INT_MIN;
	while(i<=3){
		cin>>n;
		if(n>max){
			max = n;
		}
		i++;
	}
	cout<<max<<endl;
	return 0;
}