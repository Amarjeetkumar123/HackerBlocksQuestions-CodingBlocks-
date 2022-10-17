#include <bits/stdc++.h>
using namespace std;
void subsets(vector<int>arr , int index , vector<int>output , int key){
	// base case
	if(index >= arr.size()){
		int sum = 0;
		sum = accumulate(output.begin(),output.end(),0);
		if(sum==key){
			reverse(output.begin(),output.end());
			for(int i=0;i<output.size();i++){
				cout<<output[i]<<" ";
			}
			cout<<endl;
			
		}
		
			
		return;
	}

	// recursive case

	// exclude
	subsets(arr,index+1,output,key);

	// include
	int element = arr[index];
	output.push_back(element);
	subsets(arr,index+1,output,key);

}
int main() {

	int n;
	cin>>n;
	vector<int>arr;
	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		arr.push_back(a);
	}
	


	int key; cin>>key;

	vector<int>output;
	int index = 0;

	subsets(arr,index,output,key);

	return 0;
}