#include<iostream>
using namespace std;

bool isPalindrome(int *arr ,int s , int e){

	// base case
	if(s>=e)
	return 1;
	// recursive case

	if(arr[s]==arr[e])
	return isPalindrome(arr,s+1,e-1);
	else
	return 0;

}
int main() {
	int n; cin>>n;
	int arr[n];

	for(int i=0;i<n;i++)
	cin>>arr[i];

	if(isPalindrome(arr,0,n-1))
	cout<<"true";
	else 
	cout<<"false";
	return 0;
}