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
    cin>>s;
    ll sum=0,mod=1000000007,cnt1=0,tep=0,cnt2=0;
    for(rg i=0;s[i];i++)
    {
        if(s[i]=='A')
        {
            for(rg j=i+1;s[j];j++)
            {
                if(s[j]=='T')
                cnt2++;
            }
            for(rg j=0;j<i;j++)
            {
                if(s[j]=='P')
                cnt1++;
            }
            tep=i;
            break;
        }
    }
    for(rg i=0;s[i];i++)
    {
        if(s[i]=='A')
        {
            for(rg m=tep;m<i;m++)
            {
                if(s[m]=='P')cnt1++,cnt1%=mod;
                if(s[m]=='T')cnt2--,cnt2%=mod;
            }
            //cout<<cnt1<<" "<<cnt2<<endl;
            sum+=(cnt1*cnt2)%mod;
            sum%=mod;
            tep=i;
        }
    }
    cout<<sum<<endl;
   	return 0;
}
