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
map<char,ll>p;
int main()
{
    string a,b;
    cin>>a>>b;
    for(rg i=0;a[i];i++)
    {
        p[a[i]]++;
    }
    ll sum=0;
    for(rg i=0;b[i];i++)
    {
        if(p[b[i]])
        {
            p[b[i]]--;
            sum++;
        }
        //else break;
    }
    if(sum==b.size())
    {
        cout<<"Yes"<<" ";
        sum=0;
        for(auto it:p)
        {
            if(it.second)
            {
                sum+=it.second;
            }

        }cout<<sum<<endl;
    }
    else
    {
        cout<<"No"<<" "<<b.size()-sum<<endl;
    }
   	return 0;
}
