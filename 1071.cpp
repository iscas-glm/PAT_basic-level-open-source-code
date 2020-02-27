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
ll T,k;
int main()
{
    cin>>T>>k;
    ll sum=T;
    while(k--)
    {
        ll n1,b,t,n2;
        cin>>n1>>b>>t>>n2;
        if(t>sum)
        {
            cout<<"Not enough tokens.  Total = "<<sum<<"."<<endl;
            continue;
        }
        if(b==1)
        {
            if(n2<=n1)
            {
                cout<<"Lose "<<t<<".  Total = "<<sum-t<<"."<<endl;
                sum-=t;
            }
            else
            {
                cout<<"Win "<<t<<"!  Total = "<<sum+t<<"."<<endl;
                sum+=t;
            }
        }
        else if(b==0)
        {
              if(n2>=n1)
            {
                cout<<"Lose "<<t<<".  Total = "<<sum-t<<"."<<endl;
                sum-=t;
            }
            else
            {
                cout<<"Win "<<t<<"!  Total = "<<sum+t<<"."<<endl;
                sum+=t;
            }
        }
        if(sum==0)
        {
            cout<<"Game Over."<<endl;
            break;
        }
    }
   	return 0;
}
