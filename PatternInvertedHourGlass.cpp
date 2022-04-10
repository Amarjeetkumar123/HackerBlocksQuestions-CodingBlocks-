#include<iostream>
using namespace std;

	int main() {
		int n;
		cin>>n;
		int nsp=2*n-1;
		
		int nr=2*n+1;
		int num=n;
		int a=0;
		
		for(int i=1;i<=nr;i++)
		{
			if(i>n+1)
				a=nr-i+1;
			else
				a=i;
				
			//work for numbers
			for(int cst=1;cst<=a;cst++)
			{
				cout<<num<<" ";
				num--;
			}
			
			
			//work for spaces
			for(int csp=1;csp<=nsp;csp++)
			{
				cout<<"  ";
			}
			
			//work for numbers
			for(int cst=1;cst<=a;cst++)
			{
				num++;
				if(num!=0)
				cout<<num<<" ";
			}
			//preparation
			
			if(i<=(nr)/2)
			{
				nsp=nsp-2;
				
			}
			else
				nsp=nsp+2;
			
			cout<<endl;
		}
			return 0;
	}
