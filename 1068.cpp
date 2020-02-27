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
ll n,m,a[1005][1005];
ll dx[8]={-1,-1,-1,0,0,1,1,1},dy[8]={0,-1,1,1,-1,0,-1,1};
inline bool in(ll x,ll y)
{
    if(x<1||y<1||x>n||y>m)return 0;
    return 1;
}
ll p,cnt;
vector<pair<pair<ll,ll>,ll>>v;
map<ll,ll>q;
int main()
{
    cin>>m>>n>>p;
    for(rg i=1;i<=n;i++)
    {
        for(rg j=1;j<=m;j++)a[i][j]=read(),q[a[i][j]]++;
    }
    for(rg i=1;i<=n;i++)
    {
        for(rg j=1;j<=m;j++)
        {
            ll x=i,y=j,check=a[i][j],flag=0;
            for(rg f=0;f<8;f++)
            {
                ll xx=x+dx[f],yy=y+dy[f];
                if(in(xx,yy)&&abs(a[xx][yy]-check)>p)continue;
                if(in(xx,yy)&&abs(a[xx][yy]-check)<=p)
                {
                    flag=1;
                    break;
                }
            }
            if(!flag&&q[a[i][j]]==1)
            {
                //cout<<j<<i<<endl;
                cnt++;
                if(cnt>1)
                {
                    //cout<<j<<i<<endl;
                    cout<<"Not Unique"<<endl;
                    return 0;
                }
                v.push_back(make_pair(make_pair(j,i),check));
            }
        }
    }
    if(!v.size())
    {
        cout<<"Not Exist"<<endl;
        return 0;
    }
    else
    {
        cout<<"("<<v[0].first.first<<", "<<v[0].first.second<<"): "<<v[0].second<<endl;
    }
    return 0;
}
