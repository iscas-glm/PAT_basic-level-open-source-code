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
ll t,cnt=1,cntt;
ll a[10],flag[10];
int main()
{
    cin>>t;
    a[5]=-inf;
    for(rg i=1;i<=t;i++)
    {
       ll x=read();
       if(x%5==0&&x%2==0)a[1]+=x,flag[1]=1;
       if(x%5==1)
       {
           if(cnt%2)
           {
               a[2]+=x;
           }
           else a[2]-=x;
           cnt++;
           flag[2]=1;
       }
       if(x%5==2)a[3]++,flag[3]=1;
       if(x%5==3)a[4]+=x,cntt++,flag[4]=1;
       if(x%5==4)a[5]=max(a[5],x),flag[5]=1;
    }

    for(rg i=1;i<=5;i++)
    {
        if(i==4&&flag[4]==0)
        {
            cout<<"N"<<" ";
            continue;
        }
        if(i==4&&flag[i])
        {
            cout<<setiosflags(ios::fixed)<<setprecision(1)<<a[i]*1.0/(1.0*cntt)<<" ";
            continue;
        }
        if(flag[i]&&i!=5)
        {
            cout<<a[i]<<" ";
        }
        else if(flag[i]==0&&i!=5)
        {
            cout<<"N"<<" ";
        }
        else if(flag[i]&&i==5)
        {
            cout<<a[i]<<endl;
        }
        else if(flag[i]==0&&i==5)
        {
            cout<<"N"<<endl;
        }
    }
   	return 0;
}
