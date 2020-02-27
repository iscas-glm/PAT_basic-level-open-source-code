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
string m;
int main()
{
    cin>>n;
    getchar();
    for(rg i=1;i<=n;i++)
    {
        getline(cin,m);
        if(m.size()<6)
        {
            cout<<"Your password is tai duan le."<<endl;
            continue;
        }
        ll flag1=0,flag2=0,flag3=0;
        for(rg j=0;m[j];j++)
        {
            if(m[j]=='.')continue;
            if(m[j]>='0'&&m[j]<='9')flag1=1;
            if((m[j]>='a'&&m[j]<='z')||(m[j]>='A'&&m[j]<='Z'))flag2=1;
            if(!(m[j]>='0'&&m[j]<='9')&&!((m[j]>='a'&&m[j]<='z')||(m[j]>='A'&&m[j]<='Z')))
            {
                cout<<"Your password is tai luan le."<<endl;
                flag3=1;
                break;
            }
        }
        if(flag3)continue;
        if(flag1==1&&flag2==0)
        {
            cout<<"Your password needs zi mu."<<endl;
            continue;
        }
        if(flag1==0&&flag2==1)
        {
            cout<<"Your password needs shu zi."<<endl;
            continue;
        }
        if(flag1&&flag2)
        cout<<"Your password is wan mei."<<endl;

    }
    return 0;
}
