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
double a,b,c,d;
int main()
{
    cin>>a>>b>>c>>d;
    double k=a*c*cos(b+d);
    if(abs(k)<0.005)k=0;
    double m=a*c*sin(b+d);
    if(abs(m)<0.005)m=0;
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<k;

    if(m<0)
    {
        cout<<setiosflags(ios::fixed)<<setprecision(2)<<m<<'i'<<endl;
    }   else cout<<'+'<<setiosflags(ios::fixed)<<setprecision(2)<<m<<'i'<<endl;
   	return 0;
}
