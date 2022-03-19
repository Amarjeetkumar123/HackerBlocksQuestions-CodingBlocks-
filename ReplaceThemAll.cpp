#include <iostream>
using namespace std;
int main()
{
    long long n; cin>>n;

    if(n==0) // seperately handled
    {
        // cout<<5<<endl;
        // return 0;
		n=5;
    }

    // normal kaam karo
    long long ans=0;
    long long p=1;

    while(n>0)
    {
        int dig=n%10;
        if(dig==0)
        {
            dig=5;
        }
        ans=ans + dig * p;
        p=p*10;
        n=n/10;
    }

    cout<<ans<<endl;
    

    return 0;
}