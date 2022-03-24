#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a , b , c;
	cin>>a>>b>>c;

	double d;
	d = ((b*b)- (4*a*c));

	double root1 , root2;

	root1 = ((-b + sqrt(d))/(2*a));
	root2 = ((-b - sqrt(d))/(2*a));

	if(root1<root2){
		a = root1;
		b = root2;
	}
	else{
		a = root2;
		b = root1;
	}

	if(d>0){
		cout<<"Real and Distinct"<<endl;
		cout<<a<<" "<<b<<endl;
	}
	else if(d==0){
		cout<<"Real and Equal"<<endl;
		cout<<a<<" "<<b<<endl;
	}
	else if(d<0){
		cout<<"Imaginary"<<endl;
	}

	return 0;
}