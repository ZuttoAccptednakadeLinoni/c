#include<bits/stdc++.h>
using namespace std;

void work()
{
	long long n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for (long long i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	long long cur = 1, index = 0;
	while (k--)
	{
		cur += index;
		while (index < n && arr[index] <= cur)
		{
			index++;
			cur++;
//			cout<<index<<" "<<cur<<"\n";
		}
//		cout << cur << '\n';
	}
	cout << cur << '\n';
}

int main(){
	int t;
	cin>>t;
	while(t--)work();
} 
