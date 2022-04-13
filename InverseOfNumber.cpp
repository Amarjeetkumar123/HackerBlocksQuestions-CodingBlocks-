#include<iostream>
#include<cmath>
using namespace std ;
int main() {
	int num;
	int place = 1;
    int mult = 1;
    int ans = 0;

	cin>>num;

    while(num != 0){
        int rem = num % 10;
        ans = ans + place * pow(10, rem - 1);
        num = num / 10;
        place++;
    }
		cout<<ans;
    return 0;
}