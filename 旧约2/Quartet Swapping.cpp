//
// Created by k0itoYuu on 2025/5/19.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[200005];
long long getCount(vector<int>&q, int l, int r)
{
    //递归的结束条件
    if (l >= r) return 0;


    int mid = l + r >> 1;
    long long cnt = 0;
    cnt += getCount(q, l, mid);
    cnt += getCount(q, mid+1, r);
    int temp[r-l+1];
    //合并
    int i = l, j = mid+1, k = 0;
    while (i <= mid && j <= r)
    {
        if (q[i] <= q[j]) temp[k++] = q[i++];
        else
        {
            temp[k++] = q[j++];
            cnt += mid - i + 1;
        }
    }

    while (i <= mid) temp[k++] = q[i++];
    while (j <= r) temp[k++] = q[j++];

    for (i = l, j = 0; i <= r; i++, j++)
        q[i] = temp[j];
    return cnt;
}
void solve(){
    int n;
    cin>>n;
    vector<int>vj,vo;
    for (int i=0;i<n;i++){
        int q;
        cin>>q;
        if (i%2==0)vj.push_back(q);
        else vo.push_back(q);
    }
    int qw=getCount(vj,0,vj.size()-1);
    int we=getCount(vo,0,vo.size()-1);
    sort(vj.begin(),vj.end());
    sort(vo.begin(),vo.end());
    if ((qw+we)%2==1){
        if (vj.size()>vo.size())swap(vj[vj.size()-1],vj[vj.size()-2]);
        else swap(vo[vo.size()-1],vo[vo.size()-2]);
    }
    if (n%2==0){
        for (int i=0;i<n/2;i++){
            cout<<vj[i]<<" "<<vo[i]<<" ";
        }
    }else{
        for (int i=0;i<n/2;i++){
            cout<<vj[i]<<" "<<vo[i]<<" ";
        }
        cout<<vj[vj.size()-1];
    }
    cout<<endl;
}

signed main(){
    int t;
    cin>>t;
    while (t--)solve();
}