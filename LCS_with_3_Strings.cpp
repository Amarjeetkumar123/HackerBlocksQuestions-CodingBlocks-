#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3;
int dp[205][205][205];
int solve(int i,int j,int k){

	if(i == 0|| j == 0 || k == 0)
		return 0;

	if(dp[i][j][k] != -1)
		return dp[i][j][k];

	if(s1[i-1] == s2[j-1] && s2[j-1] == s3[k-1]){

		return dp[i][j][k] = 1 + solve(i-1,j-1,k-1);

	}
	
			int opt1 = solve(i-1,j,k);
	
			int opt2 = solve(i,j-1,k);
		
			int opt3 = solve(i,j,k-1);
		

		return dp[i][j][k] = max({opt1,opt2,opt3});

}
int main() {

	cin>>s1;
	cin>>s2;
	cin>>s3;

	memset(dp,-1,sizeof(dp));

	cout<<solve(s1.length(),s2.length(),s3.length());


	return 0;
}