#include<iostream>
using namespace std;
int main() {
	int n1,n2;
	int c=0,rem=0,t,j=0,i,counter=0,sum=0;
	cin>>n1>>n2;
	for(int k=n1;k<n2;k++)
	{
	int x = k;
	c=0;
	while(x!=0){
		x=x/10;
		c++;
	}
	x = k;
	while(x>0)
{
		i = x%10;
		t=1;
	
	while(j<c)
	{
		t = t*i;
		j++;
	}
		j=0;
	sum = sum + t;
	x = x/10;
}
if(sum == k)
{
	cout<<k<<endl;

}
sum=0;
}

	return 0;
}