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
ll n,k;
struct node
{
    string s;
    ll num;
}p[maxn];
inline bool cmp(const node &a,const node&b)
{
    if(a.num==b.num)return a.s<b.s;
    return a.num>b.num;
}
int main()
{
    cin>>n>>k;
    for(rg i=1;i<=n;i++)
    {
        cin>>p[i].s>>p[i].num;
    }
    sort(p+1,p+1+n,cmp);
    //cout<<p[6].s<<endl;
    if(n%k==0)
    {
        ll cnt=n/k,num=cnt/2+1;
        for(rg i=1;i<=k;i++)
        {
            string tep[10005];
            ll cut=(i-1)*cnt;
            for(rg j=1;j<num;j++)
            {
                tep[j]=p[cut+cnt+1-(cnt-(abs(j-num)-1)*2-1)].s;
                //cout<<cut+k+1-(k-(abs(j-num)-1)*2-1)<<endl;
            }
            tep[num]=p[cut+1].s;
            for(rg j=num+1;j<=cnt;j++)
            {
                tep[j]=p[cut+cnt+1-(cnt-(abs(j-num)-1)*2-2)].s;
                //cout<<cut+k+1-(k-(abs(j-num)-1)*2-2)<<endl;
            }
            for(rg i=1;i<=cnt;i++)
            {
                i==cnt?cout<<tep[i]<<endl:cout<<tep[i]<<" ";
            }
        }
    }
    else
    {
        ll sur=n/k+n%k,num=sur/2+1;
        //cout<<sur<<endl;
        string tep[10005];
        for(rg j=1;j<num;j++)
        {
            tep[j]=p[sur+1-(sur-((abs(j-num)-1)*2+1))].s;
            //cout<<k+2-(n%k+k-((abs(j-num)-1)*2+1))<<endl;
        }
        tep[num]=p[1].s;
        for(rg j=num+1;j<=sur;j++)
        {
            tep[j]=p[sur+1-(sur-((abs(j-num)-1)*2+2))].s;
        }
         for(rg i=1;i<=sur;i++)
            {
                i==sur?cout<<tep[i]<<endl:cout<<tep[i]<<" ";
            }
        ll cut=sur;
        n=n-sur;
        //cout<<k<<endl;
        ll cnt=k-1,a=n/(k-1),num1=a/2+1;
        //cout<<a<<endl;
        for(rg i=1;i<=cnt;i++)
        {
            string tep1[10005];
            for(rg j=1;j<num1;j++)
            {
                tep1[j]=p[cut+a+1-(a-(abs(j-num1)-1)*2-1)].s;
                //cout<<cut+k+1-(k-(abs(j-num1)-1)*2-1)<<endl;
            }
            tep1[num1]=p[cut+1].s;
            for(rg j=num1+1;j<=a;j++)
            {
                tep1[j]=p[cut+a+1-(a-(abs(j-num1)-1)*2-2)].s;
            }
            cut+=a;
             for(rg i=1;i<=a;i++)
            {
                i==a?cout<<tep1[i]<<endl:cout<<tep1[i]<<" ";
            }
        }
    }
    return 0;
}
