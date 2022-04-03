#include<iostream>
using namespace std;

	int main()
{
int minf,maxf,step,f;
float c;
cin>>minf>>maxf>>step;

for(f=minf;f<=maxf;f=f+step)
{
c=(((f-32)*5)/9);
if((c-int( c ))==0)
{
cout<<f<<" "<<c<<endl;
}
else
{
if(c>0)
{
cout<<f<<" "<<int( c )<<endl;
}
else
{
cout<<f<<" "<<int( c )+1<<endl;
}

}
}
return 0;
}