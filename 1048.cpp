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
char a[1005],b[1005],c[1005];
ll tot;
int main()
{
    cin>>a>>b;
    ll cnt=0;
    rg i,j;
    //cout<<a[0]<<endl;
    for(i=strlen(b)-1, j=strlen(a)-1;j>=0&&i>=0;i--,j--)
    {
        //cout<<i<<" "<<j<<" "<<cnt<<endl;
        cnt++;
        if(cnt%2)
        {
            ll k=(b[i]-48+a[j]-48)%13;
            if(k==10)c[++tot]='J';
            if(k==11)c[++tot]='Q';
            if(k==12)c[++tot]='K';
            if(k>=0&&k<=9)c[++tot]=48+k;
        }
        else
        {
            ll k=b[i]-a[j];
            if(k<0)k+=10;
            c[++tot]=48+k;
        }
    }
    //cout<<i<<" "<<j<<" "<<cnt<<endl;
    if(i>=0)
    for(rg k=i;k>=0;k--)
    {
        c[++tot]=b[k];
    }
    if(j>=0)
    for(rg k=j;k>=0;k--)
    {
        //cout<<tot<<endl;
        cnt++;
        if(cnt%2)c[++tot]=a[k];
        else
        {
            if(a[k]!='0')
            {
                c[++tot]=106-a[k];
            }
            else c[++tot]=a[k];
        }
    }
    for(rg i=tot;i>=1;i--)cout<<c[i];
   	return 0;
}
