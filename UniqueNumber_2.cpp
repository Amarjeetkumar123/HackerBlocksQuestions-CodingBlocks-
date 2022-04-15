#include <iostream>
using namespace std;
int main() {
    int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    //take input n elements and store it in array
    cin>>a[i];
}
int final_xor=0;
for(int i=0;i<n;i++)
{
    final_xor=final_xor^a[i];

}
//mask with  rightmost set bit.
int set_bit_no=final_xor&(~(final_xor-1));

int x=0,y=0;
for(int i=0;i<n;i++)
{
    if(a[i]&set_bit_no)
    {
        x=x^a[i];

    }
    else
    {
        y=y^a[i];
    }


}
if(x>y)
{
    cout<<y<<" "<<x<<"\n";

}
else
{
    cout<<x<<" "<<y<<"\n";
}



}