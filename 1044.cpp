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
string q[50]={"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"},p[50]={"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
int main()
{
    ll n=read();
    while(n--)
    {
        string s;
        getline(cin,s);
        if(s[0]>='0'&&s[0]<='9')
        {
            ll sum=0;
            for(rg i=0;s[i];i++)
            {
                sum=sum*10+s[i]-48;
            }
            string a,b;
                ll cnt=0;
               // cout<<s[3]<<endl;
               if(sum==0)
               {
                   cout<<q[0]<<endl;
                   continue;
               }
            while(sum)
            {
                cnt++;
                if(cnt==1)
                b=q[sum%13];
                else a=p[sum%13-1];
                sum/=13;
            }
            if(cnt==2)
            {
                if(b!="tret")
                cout<<a<<" "<<b<<endl;
                else cout<<a<<endl;
            }

            else cout<<b<<endl;
        }
        else
        {
            if(s.size()>4)
            {
                string a=s.substr(0,3),b=s.substr(4,3);
                ll sum=0;
                for(rg i=0;i<=12;i++)
                {
                     if(q[i]==b)
                    {
                        //cout<<i<<endl;
                        sum+=i;
                    }
                }
                for(rg i=0;i<=11;i++)
                {
                     if(p[i]==a)
                    {
                        sum+=(i+1)*13;
                    }
                }
                cout<<sum<<endl;
            }
            else
            {
                //cout<<1<<endl;
                for(rg i=0;i<=12;i++)
                {
                    if(q[i]==s)
                    {
                        cout<<i<<endl;
                        break;
                    }
                }
                for(rg i=0;i<12;i++)
                {
                    if(p[i]==s)
                    {
                        cout<<(i+1)*13<<endl;
                        break;
                    }
                }
            }
        }
    }
   	return 0;
}
