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
struct node
{
    string s,q;
    ll val;
    ll sub;
}p[maxn];
ll sum,tot;
inline bool check(ll x)
{
    if(x%400||(x%4==0&&x%100))return 1;
    return 0;
}
inline bool cmp(const node&a,const node &b)
{
    if(a.val==b.val)
    {
        return a.s<b.s;
    }
    return a.val<b.val;
}
ll k1[50]={0,31,59,90,120,151,181,212,243,273,304,334,365},k2[50]={0,31,60,91,121,152,182,213,244,274,305,335,366};
int main()
{
    ll n=read();
    ios::sync_with_stdio(false);
    for(rg i=1;i<=n;i++)
    {
        cin>>p[i].s>>p[i].q;
        //cout<<p[i].s<<endl<<p[i].q<<endl;
        ll year=(p[i].q[0]-48)*1000+(p[i].q[1]-48)*100+(p[i].q[2]-48)*10+(p[i].q[3]-48),month=(p[i].q[5]-48)*10+p[i].q[6]-48,day=(p[i].q[8]-48)*10+p[i].q[9]-48;
        //cout<<year<<" "<<month<<" "<<day<<endl;
        if(year>2014)
        {
            p[i].val=inf;
            ++tot;
            continue;
        }
        if(year==2014)
        {
            ll sum=k1[month-1];
            //cout<<sum<<endl;
            p[i].val=249-(sum+day);//cout<<p[i].val<<endl;
            if(p[i].val<0)p[i].val=inf,tot++;

            continue;
        }
        p[i].val=0;
        for(rg j=year+1;j<=2013;j++)
        {
            if(check(year))p[i].val+=366;
            else  p[i].val+=365;
        }
        if(check(year))
        {
            ll sum=k2[month-1];
            sum+=day;
            p[i].val+=366-sum;
        }
        else
        {
            ll sum=k1[month-1];
            sum+=day;
            p[i].val+=365-sum;
        }
        //cout<<p[i].val<<endl;
        if(p[i].val>72950)p[i].val=inf,tot++;
    }
    sort(p+1,p+1+n,cmp);
    /*for(rg i=1;i<=n;i++)
    {
        cout<<p[i].val<<endl;
    }*/
    if(tot==n)
    {
        cout<<0<<endl;
        return 0;
    }
    cout<<n-tot<<" ";

    for(rg i=n;i>=1;i--)
    {
        if(p[i].val!=inf)
        {
            cout<<p[i].s<<" ";
            break;
        }
    }
    cout<<p[1].s<<endl;
   	return 0;
}
