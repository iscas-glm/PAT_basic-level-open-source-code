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
string s;

int main()
{
    ll n=read();
    for(rg i1=1;i1<=n;i1++)
    {
        cin>>s;
        ll flag=0;
        if(s=="PAT")
        {
            cout<<"YES"<<endl;
            continue;
        }
        ll flag2=0;
        for(rg i=0;s[i];i++)
        {
            if(s[i]!='P'&&s[i]!='A'&&s[i]!='T')
            {
                cout<<"NO"<<endl;
                flag=1,flag2=1;
                break;
            }
        }
        if(flag2)continue;
        ll l=0,r=s.size()-1,sum=0;
        while(s[l]!='P'&&l<s.size())l++;
        while(s[r]!='T'&&r<s.size())r--;
        if(r<=l)
        {
            cout<<"NO"<<endl;
            flag=1;
            continue;
        }
        for(rg i=l+1;i<r;i++)
        {
            if(s[i]!='A')
            {
                cout<<"NO"<<endl;
                flag=1,flag2=1;
                break;
            }
            else sum++;
        }
        if(flag2)continue;
        if(sum==0)
        {
            cout<<"NO"<<endl;
            flag=1;
            continue;
        }
        string a=s.substr(0,l),b=s.substr(r+1,s.size()-r-1);
        if(a.size()==0&&b.size()==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(b.size()!=a.size()*sum)
        {
            cout<<"NO"<<endl;
            flag=1;
            continue;
        }
        rg i;
        for(i=0;a[i];i++)
        {
            if(a[i]!='A')break;
        }
        if(i<a.size())
        {
            cout<<"NO"<<endl;
            flag=1;
            continue;
        }
         for(i=0;b[i];i++)
        {
            if(b[i]!='A')break;
        }
        if(i<b.size())
        {
            cout<<"NO"<<endl;
            flag=1;
            continue;
        }
            if(flag==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
   	return 0;
}
