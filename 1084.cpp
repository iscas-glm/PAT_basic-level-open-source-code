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
char s[50][100000];
ll n,m;
int main()
{
   cin>>n>>m;
   s[1][0]=n+48;
   ll tot=1;
   while(tot<m)
   {
       tot++;
       ll temp=0;
       for(rg i=0;i<strlen(s[tot-1]);i++)
       {
           ll tep=i,cut=0;
           while(s[tot-1][tep]==s[tot-1][i])tep++,cut++;
           //cout<<tep<<endl;
           s[tot][temp]=s[tot-1][i],s[tot][temp+1]=cut+48;
           //cout<<s[tot][temp]<<" "<<s[tot][temp+1]<<endl;
           temp+=2;

           //cout<<s[tot][i]<<endl;
           i=tep-1;
           //cout<<i<<endl;
       }
       //cout<<s[tot]<<endl;
   }
   cout<<s[m]<<endl;
    return 0;
}
