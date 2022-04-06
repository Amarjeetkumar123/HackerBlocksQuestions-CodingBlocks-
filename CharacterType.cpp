#include<iostream>
using namespace std;
int main() {
	char c;
	cin>>c;
	int ch = c;
	if(ch>=65 && ch<=90)
	{
		cout<<"U";
	}
	else if(ch>=97 && ch<=122){
		cout<<"L";
	}
	else{
		cout<<"I";
	}
	return 0;
}