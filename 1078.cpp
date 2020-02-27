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
char s;
int main()
{
    cin>>s;
    if(s=='C')
    {
        getchar();
        string p;
        getline(cin,p);
        for(rg i=0;p[i];i++)
        {
            ll cnt=1;
            if(p[i]==p[i+1])
            {
                rg j;
                for(j=i+1;p[j]==p[i];j++,cnt++);
                cout<<cnt<<p[i];
                i=j-1;
            }
            else cout<<p[i];
        }
    }
    else
    {
        getchar();
        string p;
        getline(cin,p);
        for(rg i=0;p[i];i++)
        {
           if(p[i]>='0'&&p[i]<='9')
           {
               ll sum=0,tep=i;
               while(p[tep]>='0'&&p[tep]<='9')
               {
                   sum=sum*10+p[tep]-'0';
                   //cout<<sum;
                   tep++;
               }
               //cout<<sum;
               char s=p[tep];
               for(rg j=1;j<=sum;j++)cout<<s;
               i=tep;
           }
           else cout<<p[i];
        }
    }
    return 0;
}
