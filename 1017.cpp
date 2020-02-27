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
string k;
ll a[1005],b,c[1005];
int main()
{
    cin>>k>>b;
    for(rg i=0;k[i];i++)
    {
        a[i+1]=k[i]-48;
        //cout<<a[i+1];
    }
    ll temp=0;
    for(rg i=1;i<=k.size();i++)
    {
        temp=temp*10+a[i];
        c[i]=temp/b;
        temp=temp%b;
    }
    ll flag=0;
    for(rg i=1;i<=k.size();i++)
    {
        if(c[i]==0&&flag==0)continue;
        if(c[i]||(c[i]==0&&flag==1))
        {
            cout<<c[i];
            flag=1;
        }
    }
    if(flag==0)
    {
        if(k[0]==0)
        cout<<0<<" 0"<<endl;
        else
        {
            cout<<"0 "<<k[0]<<endl;
        }
        return 0;
    }
    cout<<" "<<temp<<endl;
   	return 0;
}
