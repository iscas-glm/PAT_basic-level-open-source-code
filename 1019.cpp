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
ll n,a[4];
int main()
{
    cin>>n;
    ll flag=0;
    while(n!=6174||(flag==0&&n==6174))
    {
        ll temp=n,tot=0,sum1=0,sum2=0;
        while(temp)
        {
            a[tot++]=temp%10;
            temp/=10;
        }
        sort(a,a+4);
        sum1=a[3]*1000+a[2]*100+a[1]*10+a[0],sum2=a[0]*1000+a[1]*100+a[2]*10+a[3];
        memset(a,0,sizeof(a));
        n=sum1-sum2;
        printf("%04lld - %04lld = %04lld\n",sum1,sum2,n);
        if(n==6174)flag=1;
        if(!n)break;
    }
   	return 0;
}
