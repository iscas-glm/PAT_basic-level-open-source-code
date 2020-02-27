<<<<<<< HEAD
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
ll n,sum11,sum12,sum13,sum21,sum22,sum23;
map<char,ll>p1,p2;
int main()
{
    cin>>n;
    for(rg i=1;i<=n;i++)
    {
        char a,b;
        cin>>a>>b;
        if(a=='C'&&b=='C')sum13++,sum23++;
        if(a=='C'&&b=='J')sum11++,sum22++,p1['C']++;
        if(a=='C'&&b=='B')sum12++,sum21++,p2['B']++;
        if(a=='J'&&b=='C')sum12++,sum21++,p2['C']++;
        if(a=='J'&&b=='J')sum13++,sum23++;
        if(a=='J'&&b=='B')sum11++,sum22++,p1['J']++;
        if(a=='B'&&b=='C')sum11++,sum22++,p1['B']++;
        if(a=='B'&&b=='J')sum12++,sum21++,p2['J']++;
        if(a=='B'&&b=='B')sum13++,sum23++;
    }
    cout<<sum11<<" "<<sum13<<" "<<sum12<<endl;
    cout<<sum21<<" "<<sum23<<" "<<sum22<<endl;
    ll k1=max(max(p1['C'],p1['B']),p1['J']),k2=max(max(p2['C'],p2['B']),p2['J']);
    for(auto it:p1)
    {
        if(it.second==k1)
        {
            cout<<it.first<<" ";
            break;
        }
    }
    for(auto it:p2)
    {
        if(it.second==k2)
        {
            cout<<it.first<<endl;
            break;
        }
    }
   	return 0;
}
=======
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
ll n,sum11,sum12,sum13,sum21,sum22,sum23;
map<char,ll>p1,p2;
int main()
{
    cin>>n;
    for(rg i=1;i<=n;i++)
    {
        char a,b;
        cin>>a>>b;
        if(a=='C'&&b=='C')sum13++,sum23++;
        if(a=='C'&&b=='J')sum11++,sum22++,p1['C']++;
        if(a=='C'&&b=='B')sum12++,sum21++,p2['B']++;
        if(a=='J'&&b=='C')sum12++,sum21++,p2['C']++;
        if(a=='J'&&b=='J')sum13++,sum23++;
        if(a=='J'&&b=='B')sum11++,sum22++,p1['J']++;
        if(a=='B'&&b=='C')sum11++,sum22++,p1['B']++;
        if(a=='B'&&b=='J')sum12++,sum21++,p2['J']++;
        if(a=='B'&&b=='B')sum13++,sum23++;
    }
    cout<<sum11<<" "<<sum13<<" "<<sum12<<endl;
    cout<<sum21<<" "<<sum23<<" "<<sum22<<endl;
    ll k1=max(max(p1['C'],p1['B']),p1['J']),k2=max(max(p2['C'],p2['B']),p2['J']);
    for(auto it:p1)
    {
        if(it.second==k1)
        {
            cout<<it.first<<" ";
            break;
        }
    }
    for(auto it:p2)
    {
        if(it.second==k2)
        {
            cout<<it.first<<endl;
            break;
        }
    }
   	return 0;
}
>>>>>>> a45269a6f9ce61abed19a3dbc4d5ff91c7b4ed44
