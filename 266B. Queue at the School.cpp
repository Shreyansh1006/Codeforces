#include<bits/stdc++.h>
using namespace std; 

int main() 
{ 
	int n,t;
	cin>>n>>t;
	char arr[n];
	vector<int>pos;
		for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	while(t){
		vector<int>pos;
		for(int i=0;i<n-1;i++){
			if(arr[i]=='B'&& arr[i+1]=='G'){
				pos.push_back(i);
			}
		}
		int x=pos.size();
		char temp;
		for(int i=0;i<x;i++){
			int z;
			z=pos[i];
			temp=arr[z];
			arr[z]=arr[z+1];
			arr[z+1]=temp;
			
		}
		
		
		pos.clear();
		
		t--;
	}
for(int i=0;i<n;i++){
	cout<<arr[i];
}
	return 0; 
} 

