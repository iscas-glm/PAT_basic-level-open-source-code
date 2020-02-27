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
ll sum=0,a[maxn];
inline bool cmp(ll a,ll b)
{
    return a>b;
}
int main()
{
    cin>>sum;
    ll m,n,minn=inf;
    for(rg i=1;i*i<=sum;i++)
    {
        if(sum%i==0)
        {
            ll j=sum/i;
            if(j-i<minn)
            {
                minn=j-i;
                m=j,n=i;
            }
        }
    }
    //cout<<m<<" "<<n<<endl;
    for(rg i=1;i<=sum;i++)a[i]=read();
    sort(a+1,a+1+sum,cmp);
    ll p[m+10][n+10];
    memset(p,0,sizeof(p));
    ll cnt=0,tepm=m,tepn=n,row=1,c=1;
    while(cnt<=sum&&tepm>0&&tepn>0)
    {
        ll tep=cnt;
        for(rg i=c;i<=c+tepn-1;i++)p[row][i]=a[++cnt];if(cnt>=sum)break;
        for(rg i=row+1;i<=row+tepm-1;i++)p[i][c+tepn-1]=a[++cnt];if(cnt>=sum)break;
        for(rg i=c+tepn-2;i>=c;i--)p[row+tepm-1][i]=a[++cnt];if(cnt>=sum)break;
        for(rg i=row+tepm-2;i>=row+1;i--)p[i][c]=a[++cnt];if(cnt>=sum)break;
        //cout<<tepm<<" "<<tepn<<endl;
        if(tep==cnt)break;
        row++,c++,tepm-=2,tepn-=2;
    }
    for(rg i=1;i<=m;i++)
    {
        for(rg j=1;j<=n;j++)
        {
            j==n?cout<<p[i][j]:cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
