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
inline bool f(string  x)
{
    string tep=x;
    reverse(x.begin(),x.end());
    return tep==x?1:0;
}
inline string  t(string  x)
{
    string tep=x;
    reverse(tep.begin(),tep.end());
    return tep;
}
inline string add(string a,string b)
{
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    ll tep=0,i;
    string c=a;
    for(i=0;a[i];i++)
    {
        c[i]=(a[i]+b[i]-96+tep)%10+48;
        tep=(a[i]+b[i]-96+tep)/10;
        //cout<<c[i]<<endl;
    }
    //cout<<tep<<endl;
    reverse(c.begin(),c.end());
    string tepp="1";
    if(tep>0)c=tepp+c;
    //cout<<c.size()<<endl;
    //printf("%s\n",c.c_str());
    return c;
}
int main()
{
    ll  cnt=0;
    string n;
    cin>>n;
    while(!f(n))
    {
        //cout<<t(n)<<endl;
        string k=add(n,t(n));
        cout<<n<<" + "<<t(n)<<" = "<<k<<endl;
        n=k;
        cnt++;
        if(cnt>=10)
        {
            cout<<"Not found in 10 iterations."<<endl;
            return 0;
        }
    }
    cout<<n<<" is a palindromic number."<<endl;
    return 0;
}
