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
ll n,m,k,cnt=1;
struct node
{
    string s;
    ll za,mid,mo, zo;
    ll flag1=0,flag2=0;
};
map<string,ll>p;
vector<node>v;
inline bool cmp(const node&a,const node&b)
{
    if(a.zo==b.zo)return a.s<b.s;
    return a.zo>b.zo;
}
int main()
{
    cin>>n>>m>>k;
    for(rg i=1;i<=n;i++)
    {
        string s;
        ll num;
        cin>>s>>num;
        if(num>=200)p[s]=cnt++,v.push_back(node{s,num,-1,-1,0});
    }
    for(rg i=1;i<=m;i++)
    {
        string s;
        ll num;
        cin>>s>>num;
        if(p[s])v[p[s]-1].mid=num,v[p[s]-1].flag1=1;
    }
    for(rg i=1;i<=k;i++)
    {
        string s;
        ll num;
        cin>>s>>num;
        if(p[s])v[p[s]-1].mo=num,v[p[s]-1].flag2=1;
    }
    for(rg i=0;i<v.size();i++)
    {
        //cout<<v[i].s<<endl;
        if(v[i].mid>v[i].mo)
        {
            double k=v[i].mid*0.4+v[i].mo*0.6;
            v[i].zo=round(k);
        }
        else v[i].zo=v[i].mo;
    }
    sort(v.begin(),v.end(),cmp);
    for(rg i=0;i<v.size();i++)
    {
        if(v[i].zo>=60)
        {
            cout<<v[i].s<<" "<<v[i].za<<" ";
            if(!v[i].mid&&v[i].flag1==0)cout<<-1<<" ";
            else cout<<v[i].mid<<" ";
            if(!v[i].mo&&v[i].flag2==0)cout<<-1<<" ";
            else cout<<v[i].mo<<" ";
            cout<<v[i].zo<<endl;
        }
    }
    return 0;
}

