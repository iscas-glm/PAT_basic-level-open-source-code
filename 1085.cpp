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
struct node
{
    string s;
    ll sum,cnt;
};
map<string,double>m1,m2;
vector<node>ans;
inline bool cmp(const node&a,const node&b)
{
    if(a.sum==b.sum&&a.cnt==b.cnt)return a.s<b.s;
    if(a.sum==b.sum)return a.cnt<b.cnt;
    return a.sum>b.sum;
}
int main()
{
    cin>>n;
    for(rg i=1;i<=n;i++)
    {
        char s;
        string p;
        ll a;
        double b;
        cin>>s>>a>>b>>p;
        transform(p.begin(),p.end(),p.begin(),::tolower);
        if(s=='A')
        {
            m1[p]+=b*1.0;
            m2[p]++;
        }
        if(s=='B')
        {
            m1[p]+=(b*1.0)/1.5;
            m2[p]++;
        }
        if(s=='T')
        {
            m1[p]+=b*1.5;
            m2[p]++;
        }
        //cout<<s<<a<<b<<p;
    }
    for(auto it:m1)
    {
        ans.push_back(node{it.first,(ll)it.second,m2[it.first]});
    }
    sort(ans.begin(),ans.end(),cmp);
    ll pre=-1,rk=0,tott=0;
    cout<<ans.size()<<endl;
    for(auto it:ans)
    {
        tott++;
        if(it.sum!=pre)rk=tott;
        cout<<rk<<" "<<it.s<<" "<<it.sum<<" "<<it.cnt<<endl;
        pre=it.sum;
    }
    return 0;
}
