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
char a[105],b[105];
int main()
{
    cin>>n;
    double temp=0,sum=0;
    ll cnt=0;
    for(rg i=1;i<=n;i++)
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        scanf("%s",a);
        sscanf(a,"%lf",&temp);
        sprintf(b,"%.2lf",temp);
        ll flag=0;
        for(rg j=0;a[j];j++)
        {
            if(a[j]!=b[j])
            {
                flag=1;
                break;
            }
        }
        //cout<<temp<<" "<<b<<endl;
        if(flag||temp>1000||temp<-1000)
        {
            cout<<"ERROR: "<<a<<" is not a legal number"<<endl;
        }
        else cnt++,sum+=temp;
    }
    if(!cnt)
    {
        cout<<"The average of 0 numbers is Undefined"<<endl;
        return 0;
    }
    if(cnt==1)
    {
        cout<<"The average of 1 number is "<<fixed<<setprecision(2)<<sum<<endl;
    }
    else
    {
        cout<<"The average of "<<cnt<<" numbers is "<<fixed<<setprecision(2)<<sum/cnt<<endl;
    }
    return 0;
}
