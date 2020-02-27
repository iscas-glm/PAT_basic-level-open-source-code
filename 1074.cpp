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
string s,a,b;
stack<char>p;
int main()
{
    cin>>s>>a>>b;
    reverse(a.begin(),a.end()),reverse(b.begin(),b.end()),reverse(s.begin(),s.end());
    ll m=a.size(),n=b.size();
    a.resize(25);
    b.resize(25);
    for(rg i=m;i<25;i++)a[i]='0';
    for(rg i=n;i<25;i++)b[i]='0';
    //cout<<a<<" "<<b<<endl;
    ll tep=0;
    //cout<<maxx<<endl;
    for(rg i=0;;i++)
    {
        ll k=s[i]-48;
        //cout<<k<<endl;
        if(k==0)k=10,s[i]=58;
        if(i>20)k=10;
        //cout<<s[i]-48<<" "<<a[i]-48<<" "<<b[i]-48<<endl;
        if(a[i]-48+b[i]-48+tep)
        {
        p.push((a[i]-48+b[i]-48+tep)%k+48);
        //cout<<(a[i]-48+b[i]-48+tep)%k<<" "<<tep<<endl;
        tep=(a[i]-48+b[i]-48+tep)/k;
        //cout<<tep<<endl;
        }
        else break;
        //cout<<tep<<" "<<i<<endl;
    }
    ll flag=0;
    if(p.empty())
    {
        cout<<0<<endl;
        return 0;
    }
    while(!p.empty())
    {
        char s=p.top();
        if(s!='0'&&flag==0)
        {
            flag=1;
            cout<<s;
            p.pop();
            continue;
        }
        if(flag)cout<<s;
        p.pop();
    }
    return 0;
}
