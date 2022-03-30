#include<iostream>
#include<climits>
using namespace std;
int main () {
	int i=1,num;
	int largest = INT_MIN;

	while(i<=5){
		cin>>num;
		if(num>largest){
			largest=num;
		}
		i++;
	}
	cout<<largest;
	return 0;
}