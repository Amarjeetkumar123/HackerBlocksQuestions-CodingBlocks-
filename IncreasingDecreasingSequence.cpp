#include<iostream>
using namespace std;
int main() {
	long long int h;
	long long int b;
	int n;
	int i=0;
	int sw=0;
	cin>>n;
	cin>>h;
	while(i<n-1)
	{	b=h;
		cin>>h;
		if(b>h)
		{
			if(sw==1)
			{
				cout<<"false";
				return 0;
			}
		}
		else if(b<h)
		{
			sw=1;
		}
        else{
            cout<<"false";
            return 0;
        }
		i++;
	}
	cout<<"true";
	return 0;
}
