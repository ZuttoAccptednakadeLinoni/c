#include<bits/stdc++.h>
using namespace std;



int main(){
	string s;
  cin >> s;

  vector<int> cnt(26);
  for (char c : s)
    cnt[c - 'A']++;

  int aeiou = 0, y = 0, n = 0, g = 0, other = 0;
  set<char> test = {'a', 'e', 'i', 'o', 'u'};
  for (int i = 0; i < 26; ++i) {
    if(('a' + i=='a')||('a' + i=='e')||('a' + i=='i')||('a' + i=='o')||('a' + i=='u'))
      aeiou += cnt[i];
    else if ('a' + i == 'y')
      y += cnt[i];
    else if ('a' + i == 'n')
      n += cnt[i];
    else if ('a' + i == 'g')
      g += cnt[i];
    else
      other += cnt[i];
  }

  int ans = 0;
  for (int i = 0; i <= y; ++i) {
    int u = aeiou + i;
    int v = other + (y - i) + n + g;
    int w = min(u, v / 2);

    ans = max(ans, w * 3 + min(min(v - w * 2, min(n, g)), w * 2));
  }
  cout << ans;
} 
