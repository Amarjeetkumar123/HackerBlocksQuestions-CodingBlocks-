#include<iostream>
using namespace std;
int kadaneAlgorithm(int *arr , int n){

		int curr = 0; int maxSum = 0;
		for(int i=0;i<n;i++){
			curr += arr[i];
			maxSum = max(maxSum,curr);
			if(curr < 0){
				curr = 0;
			}
		}
		return maxSum;
}
int main() {
	int testcases;
	cin>>testcases;
	
	while(testcases--){
		int n;
		cin>>n;
		int arr[10000];

		for(int i=0;i<n;i++){
			cin>>arr[i];
		}

		int originalMaxSum = kadaneAlgorithm(arr,n);
		
		int sumofArray = 0;
		for(int i=0;i<n;i++){
			sumofArray += arr[i];
			arr[i] = -arr[i];
		}

		int invertMaxsum = kadaneAlgorithm(arr,n) + sumofArray;
	
		int ans = max(invertMaxsum,originalMaxSum);

		cout<<ans<<endl;

	}

	return 0;
}