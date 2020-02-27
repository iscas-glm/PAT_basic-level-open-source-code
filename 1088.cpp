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
ll b,c,me;
int main()
{
    cin>>me>>b>>c;
    ll flag=0;
    for(rg a=99;a>=10;a--)
    {
    ll t=0,temp=a;
    while(temp)
    {
        t=t*10+temp%10;
        temp/=10;
    }
    if(a==10)t=1;
    //cout<<t<<endl;
    if(abs(a-t)*1.0/b==t*1.0/c)
    {
        flag=1;
        ll t1=a,t2=t;
        double t3=t*1.0/c;
        cout<<t1<<" ";
        if(t1>me)
        {
            cout<<"Cong";
        }
        else if(t1==me)cout<<"Ping";
        else if(t1<me)cout<<"Gai";
        cout<<" ";
        if(t2>me)
        {
            cout<<"Cong";
        }
        else if(t2==me)cout<<"Ping";
        else if(t2<me)cout<<"Gai";
        cout<<" ";
        if(t3>me)
        {
            cout<<"Cong";
        }
        else if(t3==me)cout<<"Ping";
        else if(t3<me)cout<<"Gai";
        flag=1;
        break;
    }
    }
    if(!flag)
    {
        cout<<"No Solution"<<endl;
    }
    return 0;
}
