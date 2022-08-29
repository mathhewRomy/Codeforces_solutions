#include<bits/stdc++.h>
using namespace std;

int main(){
int n,t,sum;
cin>>t;
for(int i=0;i<t;i++){ 
	cin>>n;
	vector<int> a(n);
	for(int j=0 ; j<n;j++)
		cin>>a[j];
	sort(a.begin(),a.end());
	sum=(a[1]-a[n-2])+(a[0]-a[n-1]);
   	cout<<abs(sum)<<endl;
	}
}
