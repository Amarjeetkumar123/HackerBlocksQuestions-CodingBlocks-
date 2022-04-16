#include <bits/stdc++.h>
using namespace std;


int main()

{
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {

            cin>>arr[i];

        }
        int counts[32];//will be used to store the number of elements in arr which has ith bit as 1
    for(int i=31;i>=0;i--)
    {
            // it will iterate through all ith bits
            int count=0;
        for(int j=0;j<n;j++)//will iterate through all n elements
        {
            if((arr[j]>>i)&1==1)
            {
                count++;
            }
        }
        counts[i]=count;

    }
    int ans=0;
    for(int i=0;i<32;i++)
    {
        if(counts[i]%3==1)//if ith bit repeats 3n+1 times
        {
                ans=ans|(1<<i);

        }

    }
    cout<<ans<<"\n";


    return 0;
}



