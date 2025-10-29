#include<bits/stdc++.h>
using namespace std;

long long solve(const vector<int>& a, int k, int l, int r) {
    int n = a.size();
    int i=0;
    int si=0;
    map<int,int>mp;
    long long res = 0;
    for (int j=0;j<n;j++) {
        if (mp[a[j]]==0) si++;
        mp[a[j]]++;
        while (si>k) {
            mp[a[i]]--;
            if(mp[a[i]]==0)si--;
            i++;
        }
        int low=max(i,j-r+1);
        int high=min(j,j-l+1);
        if (low<=high){
            res+=(high-low+1);
        }
    }
    return res;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,l,r;
        cin>>n>>k>>l>>r;
        vector<int>a(n);
        for (int i=0;i<n;i++) {
            cin>>a[i];
        }
        long long ans = solve(a,k,l,r) - solve(a,k - 1,l,r);
        cout<<ans<<endl;
    }
    return 0;
}