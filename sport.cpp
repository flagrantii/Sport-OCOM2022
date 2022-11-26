#include<bits/stdc++.h>
using namespace std;
int dp[101];
int slove(int arr[],int n,int m){
	if(m<0){
		return 0;
	}
	if(m==0){
		return 1;
	}
	if(dp[m]!=0){
		return dp[m];
	}
	for(int i=0;i<n;i++){
		dp[m]+=slove(arr,n,m-arr[i]);
	}
	return dp[m];
}
int main(){
	int n,m;
	cin>>n;
	int arr[n];
	memset(dp,0,sizeof(dp));
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>m;
	cout<<slove(arr,n,m);
	return 0;
}
