#include <iostream>
#include<vector>
using namespace std;

int main()
{
    long long n,m;
   
    cin >> n >> m;
    vector<long long> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    long long max = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] < m)
        {
            long long sum = s[i];
            int num = 1;
            for (int j = i + 1; j < n; j++)
            {
                if ((sum + s[j]) <= m)
                {
                    sum += s[j];
                    num++;
                }
            }

            if (num > max)
                max = num;
        }
        
    }

    cout << max << endl;
    return 0;
}

