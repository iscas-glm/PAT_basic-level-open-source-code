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
ll n,m;
struct node
{
    ll val;
    string s;
}p[maxn],p1[maxn],p2[maxn],p3[maxn];
ll tot1,tot2,tot3;
struct node1
{
    ll num,cnt;
}tp[maxn];
inline bool cmp1(const node1&a,const node1&b)
{
    if(a.cnt==b.cnt)return a.num<b.num;
    return a.cnt>b.cnt;
}
inline bool cmp(const node&a,const node&b)
{
    if(a.val==b.val)return a.s<b.s;
    return a.val>b.val;
}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0),cout.tie(0);
    cin>>n>>m;
    for(rg i=1;i<=n;i++)
    {
        cin>>p[i].s>>p[i].val;
        if(p[i].s[0]=='T')
        {
            p1[++tot1]=p[i];
        }
        if(p[i].s[0]=='A')
        {
            p2[++tot2]=p[i];
        }
        if(p[i].s[0]=='B')
        {
            p3[++tot3]=p[i];
        }
    }
    sort(p1+1,p1+1+tot1,cmp);
    sort(p2+1,p2+1+tot2,cmp);
    sort(p3+1,p3+1+tot3,cmp);
    //cout<<tot2<<endl;
    for(rg i=1;i<=m;i++)
    {
        ll a=read();
        if(a==1)
        {
            char s;
            scanf("%c",&s);
            printf("Case %lld: %lld %c\n",i,a,s);
            if(s=='T')
            {
                if(!tot1)
                {
                    printf("NA\n");
                    continue;
                }
                for(rg i=1;i<=tot1;i++)
                {
                    printf("%s %lld\n",p1[i].s.c_str(),p1[i].val);
                }
                continue;
            }
            if(s=='A')
            {
                if(!tot2)
                {
                    printf("NA\n");
                    continue;
                }
                for(rg i=1;i<=tot2;i++)
                {
                    printf("%s %lld\n",p2[i].s.c_str(),p2[i].val);
                }
                continue;
            }
            if(s=='B')
            {
                if(!tot3)
                {
                    printf("NA\n");
                    continue;
                }
                for(rg i=1;i<=tot3;i++)
                {
                    printf("%s %lld\n",p3[i].s.c_str(),p3[i].val);
                }
                continue;
            }
            printf("NA\n");
        }
        if(a==2)
        {
            ll b=read(),sum=0,cnt=0;
            cout<<"Case "<<i<<": "<<a<<" "<<setw(3)<<setfill('0')<<b<<endl;
            for(rg i=1;i<=n;i++)
            {
                if((p[i].s[1]-48)*100+(p[i].s[2]-48)*10+p[i].s[3]-48==b)
                {
                    cnt++;
                    sum+=p[i].val;
                }
            }
            if(cnt==0)
            {
                printf("NA\n");
                continue;
            }
            else cout<<cnt<<" "<<sum<<endl;
        }
        if(a==3)
        {
            string s;
            //s.clear();
            cin>>s;
            printf("Case %lld: %lld %s\n",i,a,s.c_str());
            //cout<<"Case "<<i<<": "<<a<<" "<<s<<endl;
            unordered_map<ll,ll>q;
            //q.clear();
            for(rg i=1;i<=n;i++)
            {
                string temp=p[i].s.substr(4,6);
                //cout<<temp<<endl;
                if(temp==s)
                {
                    q[(p[i].s[1]-48)*100+(p[i].s[2]-48)*10+p[i].s[3]-48]++;
                }
            }
            if(!q.size())
            {
                 printf("NA\n");
                 continue;
            }
            ll tott=0;
            for(auto it:q)
            {
                tp[++tott].num=it.first,tp[tott].cnt=it.second;
            }
            //cout<<tott<<endl;

            sort(tp+1,tp+1+tott,cmp1);
            for(rg i=1;i<=tott;i++)
            {
                printf("%lld %lld\n",tp[i].num,tp[i].cnt);
                //cout<<tp[i].num<<" "<<tp[i].cnt<<endl;
            }
        }
    }
    return 0;
}

