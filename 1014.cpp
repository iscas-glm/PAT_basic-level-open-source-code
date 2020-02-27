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
string a,b,c,d;
char s[10][20]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
ll flag=0;
int main()
{
    cin>>a>>b>>c>>d;
    for(rg i=0,j=0;a[i]&&b[j]&&i==j;i++,j++)
    {
        /*if(a[i]==b[j])
        {
            cout<<i<<" "<<j<<endl;
        }*/
        if(a[i]==b[j]&&a[i]>=65&&a[i]<=71&&flag==0)
        {
            cout<<s[a[i]-'A']<<" ";
            flag=1;
            continue;
        }
        if(a[i]==b[j]&&((a[i]>='A'&&a[i]<='N')||(a[i]>='0'&&a[i]<='9'))&&flag==1)
        {
            if(a[i]>=65&&a[i]<=78)
            {
                cout<<(ll)(10+a[i]-'A')<<":";
                break;
            }
            else if(a[i]>=48&&a[i]<=57)
            {
                cout<<"0"<<(ll)(a[i]-'0')<<":";
                break;
            }
        }
    }
     for(rg i=0,j=0;c[i]&&d[j]&&i==j;i++,j++)
     {
         if(c[i]==d[j]&&((c[i]>='A'&&c[i]<='Z')||(c[i]>='a'&&c[i]<='z')))
            {
                printf("%02lld\n",i);
                break;
            }
     }
   	return 0;
}
