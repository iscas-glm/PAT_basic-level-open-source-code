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
ll n;
map<string,ll>p,flag;
ll cnt=0;
inline bool f(ll x)
{
    if(x<=1)return 0;
    if(x==2||x==3)return 1;
    for(rg i=2;i*i<=x;i++)
    {
        if(x%i==0)return 0;
    }return 1;
}
int main()
{
    cin>>n;
    for(rg i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        p[s]=++cnt;
    }
    ll x=read();
    while(x--)
    {
        string a;
        cin>>a;
        cout<<a<<": ";
        if(flag[a]&&p.find(a)!=p.end())
        {
            cout<<"Checked"<<endl;
            continue;
        }
        flag[a]=1;
        if(p.find(a)==p.end())
        {
            cout<<"Are you kidding?"<<endl;
        }
        else
        {
            ll k=p[a];
            if(k==1)
            {
                cout<<"Mystery Award"<<endl;
                continue;
            }
            if(f(k))
            {
                cout<<"Minion"<<endl;
            }
            else
            {
                cout<<"Chocolate"<<endl;
            }
        }
    }
   	return 0;
}
