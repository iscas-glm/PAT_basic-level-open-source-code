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
ll a,b,c,d,cnt;
char s;
inline ll gcd(ll a,ll b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
inline void f(ll x,ll y)
{
    if(x==c&&y==d&&x==0)
    {
        cnt=1;
    }
    if(x<0&&y<0)
    {
        x*=-1;y*=-1;
    }
    ll flag=0,flag2=0;
    if(x<0)
    {
        flag=1;
        cout<<"(",flag2=1;
    }
    ll k=gcd(x,y);
    //cout<<k<<endl;
    x/=k,y/=k;
    if(y<0)
    {
        ll tep=x;
        y*=-1,x*=-1;
        if(tep>0)
        {
            flag=1;
            if(flag2==0)
        cout<<"(";
        }
    }
    if(y==1)
    {
        cout<<x;
        if(flag)cout<<")";
        return ;
    }
    if(x<0&&abs(x)>y)
    {
        if(abs(x)>y)cout<<x/y<<" "<<abs(x%y)<<"/"<<y;
    }
     else if(x>0&&abs(x)>y)
    {
        if(abs(x)>y)cout<<x/y<<" "<<abs(x%y)<<"/"<<y;
    }
    else  if(x<y)cout<<x<<"/"<<y;
    if(flag)cout<<")";
}
int main()
{
    cin>>a>>s>>b>>c>>s>>d;
    f(a,b);cout<<" + ";f(c,d);cout<<" = ";f(a*d+c*b,b*d);
    cout<<endl;
    f(a,b);cout<<" - ";f(c,d);cout<<" = ";f(a*d-c*b,b*d);
    cout<<endl;
    f(a,b);cout<<" * ";f(c,d);cout<<" = ";f(a*c,b*d);
    cout<<endl;

    f(a,b);cout<<" / ";f(c,d);cout<<" = ";
    if(cnt)
    {
        cout<<"Inf";
    }
    else f(a*d,b*c);
    cout<<endl;
   	return 0;
}
