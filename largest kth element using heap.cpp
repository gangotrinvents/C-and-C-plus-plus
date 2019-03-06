#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n,temp;
	cin>>n;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		v.push_back(temp);
	}
	int k;
	cin>>k;
	make_heap(v.begin(),v.end());
	for (int i = 0; i < k-1; ++i)
	{
		pop_heap(v.begin(),v.end());
		v.pop_back();
	}
	cout<<v.front();
}	