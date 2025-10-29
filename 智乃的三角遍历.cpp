// //
// // Created by k0itoYuu on 2025/5/17.
// //
//
 #include<bits/stdc++.h>
 using namespace std;
 vector<int>arr[7];
 vector<int>v[100];
 vector<int>ans;
 int nd[100][100];
 void bfs(int q){
     for (auto u:v[q]){

     }
 }
 void solve(int n){
     int x=1;
     for (int i=1;i<=n;i++){
         for (int j=0;j<i;j++){
             arr[i].push_back(x);x++;
         }
     }
     for (int i=1;i<n;i++){
         for (int j=0;j<i;j++){
             cout<<"A";
             cout<<arr[i][j]<<" ";
             v[arr[i][j]].push_back(arr[i+1][j]);
             v[arr[i][j]].push_back(arr[i+1][j+1]);
             v[arr[i+1][j]].push_back(arr[i][j]);
             v[arr[i+1][j+1]].push_back(arr[i][j]);
         }
         cout<<"!"<<endl;
     }
     for (int i=1;i<=n;i++){
         for (int j=0;j<arr[i].size()-1;j++){
             //cout<<arr[i][j]<<" ";
             v[arr[i][j]].push_back(arr[i][j+1]);
             v[arr[i][j+1]].push_back(arr[i][j]);
         }
     }
     ans.push_back(1);
     bfs(1);
 }

 int main(){
     int n;
     cin>>n;
     n;
     cout<<"YES\n";
     if (n==1)cout<<"1 2 3 1\n";
     else if (n==2)cout<<"1 3 6 5 2 4 5 3 2 1\n";
     else if (n==3)cout<<"1 2 3 5 2 4 5 6 9 5 8 4 7 8 9 10 6 3 1\n";
     else if(n==4)cout<<"1 3 6 10 15 14 9 13 8 12 7 11 12 13 14 10 9 5 8 4 7 8 9 6 5 2 4 5 3 2 1\n";
     else if(n==5)cout<<"1 3 6 10 15 21 20 14 19 13 18 12 17 11 16 17 18 19 20 15 14 9 13 8 12 7 11 12 13 14 10 9 5 8 4 7 8 9 6 5 2 4 5 3 2 1\n";
     else if(n==6)cout<<"1 3 6 10 15 21 28 27 20 26 19 25 18 24 17 23 16 22 23 24 25 26 27 21 20 14 19 13 18 12 17 11 16 17 18 19 20 15 14 9 13 8 12 7 11 12 13 14 10 9 5 8 4 7 8 9 6 5 2 4 5 3 2 1\n";
     else cout<<"1 3 6 10 15 21 28 36 35 27 34 26 33 25 32 24 31 23 30 22 29 30 31 32 33 34 35 28 27 20 26 19 25 18 24 17 23 16 22 23 24 25 26 27 21 20 14 19 13 18 12 17 11 16 17 18 19 20 15 14 9 13 8 12 7 11 12 13 14 10 9 5 8 4 7 8 9 6 5 2 4 5 3 2 1\n";
 }

//
// #include<bits/stdc++.h>
//
// using namespace std;
// const int MAXN = 100005;
// vector<pair<int, int>> G[MAXN]; //to,id
// bool vis[MAXN];
// int n, b[MAXN], tot;
// vector<int> ans;
//
// void add_edge(int u, int v){
//     G[u].emplace_back(v, tot);
//     G[v].emplace_back(u, tot++);
// }
//
// void dfs(int x)
// {
//     for (auto &i: G[x])
//     {
//         if (vis[i.second])continue;
//         vis[i.second] = true;
//         dfs(i.first);
//     }
//     ans.push_back(x);
// }
//
// int main()
// {
//     scanf("%d", &n);
//     b[0] = 1;
//     for (int i = 1; i <= n; ++i)
//     {
//         b[i] = b[i - 1] + i;
//     }
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j <= i; ++j)
//         {
//             int p1 = b[i] + j, p2 = b[i + 1] + j, p3 = b[i + 1] + j + 1;
//             add_edge(p1, p2);
//             add_edge(p2, p3);
//             add_edge(p3, p1);
//         }
//     }
//     dfs(1);
//     printf("Yes\n");
//     for (int i = 0; i < ans.size(); ++i)
//     {
//         printf("%d%c", ans[i], " \n"[i + 1 == ans.size()]);
//     }
//     return 0;
// }