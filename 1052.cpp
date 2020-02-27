// luogu-judger-enable-o2
#include<bits/stdc++.h>
#include<unordered_set>
#define rg register ll
#define inf 2147483647
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)
#define ll long long
#define maxn 300005
#define lb(x) (x&(-x))
const double eps = 1e-6;
using namespace std;
inline ll read()
{
	char ch = getchar(); ll s = 0, w = 1;
	while (ch < 48 || ch>57) { if (ch == '-')w = -1; ch = getchar(); }
	while (ch >= 48 && ch <= 57) { s = (s << 1) + (s << 3) + (ch ^ 48); ch = getchar(); }
	return s * w;
}
inline void write(ll x)
{
	if (x < 0)putchar('-'), x = -x;
	if (x > 9)write(x / 10);
	putchar(x % 10 + 48);
}
vector<string>m[5];
int main()
{
    for(rg i=1;i<=3;i++)
    {
       string s;
       getline(cin,s);
       ll tot=0;
       //cout<<s<<endl;
       for(rg j=0;j<s.size()-1;j++)
       {
           if(s[j]=='[')
           {
               string temp;
               ll tot=j+1;
               while(s[tot]!=']')tot++;
               temp=s.substr(j+1,tot-1-j);
               m[i].push_back(temp);
           }
            //cout<<tot<<endl;
       }
    }

    //cout<<m[1][1]<<endl;
    ll x=read();
    for(rg i=1;i<=x;i++)
    {
       ll a,b,c,d,e;
       cin>>a>>b>>c>>d>>e;
       if(a>m[1].size()||b>m[2].size()||c>m[3].size()||d>m[2].size()||e>m[1].size()||a<1||b<1||c<1||d<1||e<1)
       {
           cout<<"Are you kidding me? @\\/@"<<endl;
       }
       else
       {
            cout<<m[1][a-1]<<"("<<m[2][b-1]<<m[3][c-1]<<m[2][d-1]<<")"<<m[1][e-1]<<endl;
       }
    }
   	return 0;
}

