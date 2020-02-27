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
ll n,m,val[maxn],wrong[maxn],total[maxn];
struct node
{
    ll id,wrong;
}p[105];
string s[105];
ll ans[maxn],tot;
inline bool cmp(const node&a,const node&b)
{
    if(a.wrong==b.wrong)return a.id<b.id;
    return a.wrong>b.wrong;
}
int main()
{
    cin>>n>>m;
    for(rg i=1;i<=m;i++)
    {
        ll a,b;
        cin>>a>>b;
        getchar();
        getline(cin,s[i]);
        val[i]=a;
    }
    for(rg i=1;i<=n;i++)
    {
        string tep;
        ll cnt=0,sum=0;
        getline(cin,tep);
        for(rg i=0;tep[i];i++)
        {
            if(tep[i]=='(')
            {
                cnt++;
                p[cnt].id=cnt;
                rg j=i+1;
                while(tep[j]!=')')j++;
                string temp=tep.substr(i+1,j-i-1);
                //cout<<temp<<endl;
                if(temp==s[cnt])sum+=val[cnt];
                else p[cnt].wrong++;
            }
        }
        total[i]=sum;
    }
    for(rg i=1;i<=n;i++)
    {
        cout<<total[i]<<endl;
    }
    sort(p+1,p+1+m,cmp);
    rg check=p[1].wrong,i=1;
    if(!check)
    {
        cout<<"Too simple"<<endl;
        return 0;
    }
    cout<<check<<" ";
    /*for(rg i=1;i<=m;i++)
    {
        cout<<p[i].wrong<<" "<<p[i].id<<endl;
    }*/
    while(p[i].wrong==check&&i<=m)
    {
        ans[++tot]=p[i].id;
        i++;
        //cout<<ans[tot]<<endl;
    }
    for(rg i=1;i<=tot;i++)
    {
        i==tot?cout<<ans[i]<<endl:cout<<ans[i]<<" ";
    }
    return 0;
}
