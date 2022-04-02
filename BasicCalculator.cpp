#include<iostream>
using namespace std;
int main() {
	int n1,n2;
	char ch;
	do{
	cin>>ch;
	if(ch=='x' || ch=='X'){
		return 0;
	}

	switch(ch){
		case '+':
		cin>>n1>>n2;
		cout<<n1+n2<<endl;
		break;

		case '-':
		cin>>n1>>n2;
		cout<<n1-n2<<endl;
		break;

		case '*':
		cin>>n1>>n2;
		cout<<n1*n2<<endl;
		break;

		case '/':
		cin>>n1>>n2;
		cout<<n1/n2<<endl;
		break;

		case '%':
		cin>>n1>>n2;
		cout<<n1%n2<<endl;
		break;

		default :
		cout<<"Invalid operation. Try again."<<"\n";
		break;
	}
	}
	while(1);
}