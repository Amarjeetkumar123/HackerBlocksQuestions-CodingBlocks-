
#include <iostream>
using namespace std;

int main()
{
	int n;
	int rev = 0;
	int sumOdd = 0, sumEven = 0, c = 1;
	cin>>n;
	
	while (n != 0) {

		if (c % 2 == 0){
			sumEven += n%10;
		}
		
		else{
			sumOdd += n % 10;
		}
			
		n /= 10;
		c++;
	}

	cout << sumOdd << "\n";
	cout << sumEven;

	return 0;
}
