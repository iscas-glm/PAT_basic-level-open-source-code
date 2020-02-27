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
ll n,m,val[maxn],wrong[maxn];
double total[maxn];
struct node
{
    char choice;
    ll id,wrong;
}p[1005],ans[1005];
string s[105];
ll tot,tott;
inline bool cmp(const node&a,const node&b)
{
    if(a.wrong==b.wrong&&a.id==b.id)return a.choice<b.choice;
    if(a.wrong==b.wrong)return a.id<b.id;
    return a.wrong>b.wrong;
}
map<pair<ll,char>,ll>mp;
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
        ll cnt=0;
        double sum=0;
        getline(cin,tep);
        for(rg i=0;tep[i];i++)
        {
            if(tep[i]=='(')
            {
                cnt++;
                rg j=i+1;
                while(tep[j]!=')')j++;
                string temp=tep.substr(i+1,j-i-1);
                //cout<<temp<<endl;
                if(temp==s[cnt])sum+=val[cnt];
                else
                {
                    ll cuo=0;
                    for(rg j=0;temp[j];j++)
                    {
                        if(temp[j]>='a'&&temp[j]<='z')
                        {
                                    if(s[cnt].find(temp[j])==-1)
                                {
                                    cuo=1;
                                    mp[make_pair(cnt,temp[j])]++;
                                }
                        }
                    }
                     for(rg j=0;s[cnt][j];j++)
                    {
                         if(s[cnt][j]>='a'&&s[cnt][j]<='z')
                        {
                            if(temp.find(s[cnt][j])==-1)
                        {
                            mp[make_pair(cnt,s[cnt][j])]++;
                        }
                        }
                    }
                    if(!cuo)sum+=val[cnt]*0.5;
                }
            }
        }
        total[i]=sum;
    }
    for(rg i=1;i<=n;i++)
    {
        cout<<fixed<<setprecision(1)<<total[i]<<endl;
    }
    for(auto it:mp)
    {
        p[++tot].choice=it.first.second,p[tot].id=it.first.first,p[tot].wrong=it.second;
    }
    sort(p+1,p+1+tot,cmp);
    rg check=p[1].wrong,i=1;
    if(!check)
    {
        cout<<"Too simple"<<endl;
        return 0;
    }
    /*for(rg i=1;i<=m;i++)
    {
        cout<<p[i].wrong<<" "<<p[i].id<<endl;
    }*/
    while(p[i].wrong==check&&i<=tot)
    {
        ans[++tott].id=p[i].id,ans[tott].wrong=p[i].wrong,ans[tott].choice=p[i].choice;
        i++;
        //cout<<ans[tot]<<endl;
    }
    for(rg i=1;i<=tott;i++)
    {
        cout<<ans[i].wrong<<" "<<ans[i].id<<"-"<<ans[i].choice<<endl;
    }
    return 0;
}
