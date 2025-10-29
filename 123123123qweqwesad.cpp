#include <bits/stdc++.h>
using namespace std;
bool check(int y, int fen, int n, int m) 
{
    long long hj;
    if (fen % y != 0) 
	{
        hj = (y + 1) * (fen  /y) + m % y;
    } 
	else 
	{
        hj = (y + 1) * (fen  /y) - 1;
    }
    return hj <= m;
}
int main ()
{
	int t;
	cin >> t;
	for (int i = 1 ; i <= t ; i ++)
	{
		int n , m , k;
		cin >> n >> m >> k;
		int fen2 = (k + n - 1) / n;
		int fen = (k/n)+(k%n>0);
		cout<<fen<<" "<<fen2<<endl;
        int l = 1, r = m, ans = -1;
        while (l <= r) 
		{
            int mid = (l + r) / 2;
            if (check(mid, fen, n, m)) 
			{
                ans = mid;
                r = mid - 1;
            } 
			else 
			{
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }
	return 0;
}
