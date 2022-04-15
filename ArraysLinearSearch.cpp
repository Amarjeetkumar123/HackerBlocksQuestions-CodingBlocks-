#include<iostream>
using namespace std;

	int Linear_search(int n , int arr[] , int key){
		for(int i=0;i<n;i++){
			if(arr[i]==key){
				return i;
			}
		}
		return -1;
	}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	 int key;
	 cin>>key;

	cout<< Linear_search(n,arr,key);
	
	return 0;
}