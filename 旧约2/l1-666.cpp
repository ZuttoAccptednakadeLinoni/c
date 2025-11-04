#include<iostream>
#include<string>
using namespace std;



int main(){
	int n,m;
	cin>>n>>m;
	int q;
	string s;
	for(int i=0;i<n;i++){
		cin>>q;
		s+=(char)('a'+q-1);
	}
	for(int j=0;j<m;j++){
		cin>>q;
		if(q==1){
			int l;
			cin>>l;
			string ss;
			for(int i=0;i<l;i++){
				int ll;
				cin>>ll;
				ss+=(char)('a'+ll-1);
			}
			int e=s.find(ss);
			if(e!=-1){
				s.erase(e,ss.size());
			}
		//	cout<<s<<endl;
			cin>>l;
			ss.clear();
			for(int i=0;i<l;i++){
				int ll;
				cin>>ll;
				ss+=(char)('a'+ll-1);
			}
			if(e!=-1){
				s.insert(e,ss);
			}
	//		for(int i=0;i<s.size();i++){
	//			cout<<s[i]-'a'+1<<" ";
	//		}
	//		cout<<endl;
		}else if(q==2){
			for(int i=1;i<s.size();i++){
				if((s[i]-'a'+1+s[i-1]-'a'+1)%2==0){
					char c='a'+(s[i]-'a'+1+s[i-1]-'a'+1)/2-1;
				//	 cout<<c<<endl;
					 string ss;
					 ss+=c;
			//		 cout<<c<<endl;
					s.insert(i,ss);
					i++;
				}
			}
//			for(int i=0;i<s.size();i++){
//		cout<<s[i]-'a'+1<<" ";
//	}
//	cout<<endl;
		}else if(q==3){
			int l,r;
			cin>>l>>r;
			for(int i=0;i<=(r-l)/2;i++){
				swap(s[l+i-1],s[r-i-1]);
			}
//			for(int i=0;i<s.size();i++){
//		cout<<s[i]-'a'+1<<" ";
//	}
//	cout<<endl;
		}
	}
	for(int i=0;i<s.size();i++){
		cout<<s[i]-'a'+1;
		if(i!=s.size()-1)cout<<" ";
	}
}
