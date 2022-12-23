#include<bits/stdc++.h>
using namespace std;

int longestSubsequence(vector<int>&arr,int n){

	vector<int>increasing(n,1);
	vector<int>decreasing(n,1);

	for(int i=1;i<n;++i){
		for(int j=0;j<i;++j){

			if(arr[i] > arr[j]){
				increasing[i] = max(increasing[i],1+increasing[j]);
			}
		}
	}

	for(int i=n-2;i>=0;--i){
		for(int j=n-1;j>i;--j){
			
			if(arr[i] > arr[j]){
				decreasing[i] = max(decreasing[i],1+decreasing[j]);
			}
		}
	}

	int ans = INT_MIN;

	for(int i=0;i<n;i++){
		ans = max(ans , (increasing[i]+decreasing[i]-1));
	}

	return ans;
}
int main() {

	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;

		vector<int>arr(n);
	
		for(auto &x : arr)
			cin>>x;


		cout<<longestSubsequence(arr,n)<<endl;
	}


	return 0;
}