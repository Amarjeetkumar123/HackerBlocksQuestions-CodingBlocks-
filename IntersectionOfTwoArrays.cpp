#include<iostream>
using namespace std;
int main () {

	int n , m;
	cin>>n>>m;
	int arr1[n];
	int arr2[m];

	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}	
	for(int i=0;i<m;i++){
		cin>>arr2[i];
	}

	int i = 0;
	int j = 0;
	while(j<m){
		while(i<n){
			if(arr2[j]==arr1[i]){
				cout<<arr2[j]<<" ";
				arr1[i]=-1;
				break;
			}
			else{
				i++;
			}
		}
		i = 0;
		j++;
	}

	return 0;
}