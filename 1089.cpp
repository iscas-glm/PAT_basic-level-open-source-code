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
ll n;
vector<ll> s(105);
int main()
{
    cin>>n;
    for(rg i=1;i<=n;i++)
    {
      cin>>s[i];
    }
    for(rg i=1;i<=n;i++)
    {
        for(rg j=i+1;j<=n;j++)
        {
            vector<ll>a(105,1),lie;
            a[i]=a[j]=-1;
            for(rg h=1;h<=n;h++)
            {
                if(s[h]*a[abs(s[h])]<0)lie.push_back(h);
            }
            if(a[lie[0]]*a[lie[1]]==-1&&lie.size()==2)
            {
                cout<<i<<" "<<j<<endl;
                return 0;
            }
        }
    }
    cout<<"No Solution"<<endl;
    return 0;
}

