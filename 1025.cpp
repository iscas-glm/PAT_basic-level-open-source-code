// luogu-judger-enable-o2
#include<bits/stdc++.h>
#include<unordered_set>
#define rg register ll
#define inf 2147483647
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)
#define ll long long
#define maxn 100005
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
/*ostream &operator<<(ostream &out,const node &a)
{
    out<<setw(5)<<setfill('0')<<a.cur<<" "<<a.val<<" "<<setw(5)<<setfill('0')<<a.Next<<endl;
    return out;
}*/
ll Data[maxn],Next[maxn],listt[maxn];
int main()
{
    ll first,n,k;
    cin>>first>>n>>k;
    for(rg i=1;i<=n;i++)
    {
        ll add;
        cin>>add;
        Data[add]=read(),Next[add]=read();
    }
    ll sum=0;
    while(first!=-1)
    {
        listt[++sum]=first;
        first=Next[first];
    }
    //cout<<sum<<endl;
    for(rg i=1;i<=sum-sum%k;i+=k)
    {
        reverse(begin(listt)+i,begin(listt)+i+k);
    }
    for(rg i=1;i<sum;i++)
    {
        printf("%05lld %lld %05lld\n",listt[i],Data[listt[i]],listt[i+1]);
    }
    printf("%05lld %lld -1\n",listt[sum],Data[listt[sum]]);
   	return 0;
}
