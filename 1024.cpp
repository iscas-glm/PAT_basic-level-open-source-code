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
string s;
int main()
{
    cin>>s;
    if(s[0]=='-')
    {
        cout<<'-';
        rg i=0,j=0;
        while(s[i]!='.')i++;
        while(s[j]!='E')j++;
        if(s[j+1]=='-')
        {
            rg sum=0;
            for(rg k=j+2;s[k];k++)
            {
                sum=sum*10+s[k]-48;
            }
            if(sum==0)
            {
                for(rg k=1;s[k]!='E';k++)
                {
                    cout<<s[k];
                }
                return 0;
            }
            else
            {
               cout<<"0.";
                for(rg i=1;i<=sum-1;i++)cout<<0;
                for(rg i=1;s[i]!='E';i++)
                {
                    if(s[i]=='.')continue;
                    else cout<<s[i];
                }
            }
        }
        else
        {
             rg sum=0;
            for(rg k=j+2;s[k];k++)
            {
                sum=sum*10+s[k]-48;
            }
            if(sum==0)
            {
                for(rg k=1;s[k]!='E';k++)
                {
                    cout<<s[k];
                }
                return 0;
            }
            else
            {
                rg tep=1;
                while(s[tep]=='0')tep++;
                //cout<<tep<<endl;
                //cout<<s[tep];
                ll check=j-i-1;
                if(check>sum)
                {
                    cout<<s[1];
                    ll flag=0;
                    //cout<<sum<<endl;
                    for(rg i=1;i<=sum;i++)
                    {
                        cout<<s[i+2];
                    }
                    cout<<'.';
                    for(rg i=sum+3;s[i]!='E';i++)cout<<s[i];
                }
                else
                {
                    ll flag=0;
                    //cout<<'a'<<endl;
                    for(rg i=tep;s[i]!='E';i++)
                    {
                        if(s[i]=='.')
                        {
                            continue;
                        }
                        cout<<s[i];
                    }
                    for(rg i=1;i<=sum-check;i++)cout<<0;
                }
            }
        }
    }
    else
    {
        rg i=0,j=0;
        while(s[i]!='.')i++;
        while(s[j]!='E')j++;
        if(s[j+1]=='-')
        {
            rg sum=0;
            for(rg k=j+2;s[k];k++)
            {
                sum=sum*10+s[k]-48;
            }
            if(sum==0)
            {
                for(rg k=1;s[k]!='E';k++)
                {
                    cout<<s[k];
                }
                return 0;
            }
            else
            {
               cout<<"0.";
                for(rg i=1;i<=sum-1;i++)cout<<0;
                for(rg i=1;s[i]!='E';i++)
                {
                    if(s[i]=='.')continue;
                    else cout<<s[i];
                }
            }
        }
        else
        {
             rg sum=0;
            for(rg k=j+2;s[k];k++)
            {
                sum=sum*10+s[k]-48;
            }
            if(sum==0)
            {
                for(rg k=1;s[k]!='E';k++)
                {
                    cout<<s[k];
                }
                return 0;
            }
            else
            {
                rg tep=1;
                while(s[tep]=='0')tep++;
                //cout<<tep<<endl;
                //cout<<s[tep];
                ll check=j-i-1;
                if(check>sum)
                {
                    cout<<s[1];
                    ll flag=0;
                    //cout<<sum<<endl;
                    for(rg i=1;i<=sum;i++)
                    {
                        cout<<s[i+2];
                    }
                    cout<<'.';
                    for(rg i=sum+3;s[i]!='E';i++)cout<<s[i];
                }
                else
                {
                    ll flag=0;
                    //cout<<'a'<<endl;
                    for(rg i=tep;s[i]!='E';i++)
                    {
                        if(s[i]=='.')
                        {
                            continue;
                        }
                        cout<<s[i];
                    }
                    for(rg i=1;i<=sum-check;i++)cout<<0;
                }
            }
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
string s;
int main()
{
    cin>>s;
    if(s[0]=='-')
    {
        cout<<'-';
        rg i=0,j=0;
        while(s[i]!='.')i++;
        while(s[j]!='E')j++;
        if(s[j+1]=='-')
        {
            rg sum=0;
            for(rg k=j+2;s[k];k++)
            {
                sum=sum*10+s[k]-48;
            }
            if(sum==0)
            {
                for(rg k=1;s[k]!='E';k++)
                {
                    cout<<s[k];
                }
                return 0;
            }
            else
            {
               cout<<"0.";
                for(rg i=1;i<=sum-1;i++)cout<<0;
                for(rg i=1;s[i]!='E';i++)
                {
                    if(s[i]=='.')continue;
                    else cout<<s[i];
                }
            }
        }
        else
        {
             rg sum=0;
            for(rg k=j+2;s[k];k++)
            {
                sum=sum*10+s[k]-48;
            }
            if(sum==0)
            {
                for(rg k=1;s[k]!='E';k++)
                {
                    cout<<s[k];
                }
                return 0;
            }
            else
            {
                rg tep=1;
                while(s[tep]=='0')tep++;
                //cout<<tep<<endl;
                //cout<<s[tep];
                ll check=j-i-1;
                if(check>sum)
                {
                    cout<<s[1];
                    ll flag=0;
                    //cout<<sum<<endl;
                    for(rg i=1;i<=sum;i++)
                    {
                        cout<<s[i+2];
                    }
                    cout<<'.';
                    for(rg i=sum+3;s[i]!='E';i++)cout<<s[i];
                }
                else
                {
                    ll flag=0;
                    //cout<<'a'<<endl;
                    for(rg i=tep;s[i]!='E';i++)
                    {
                        if(s[i]=='.')
                        {
                            continue;
                        }
                        cout<<s[i];
                    }
                    for(rg i=1;i<=sum-check;i++)cout<<0;
                }
            }
        }
    }
    else
    {
        rg i=0,j=0;
        while(s[i]!='.')i++;
        while(s[j]!='E')j++;
        if(s[j+1]=='-')
        {
            rg sum=0;
            for(rg k=j+2;s[k];k++)
            {
                sum=sum*10+s[k]-48;
            }
            if(sum==0)
            {
                for(rg k=1;s[k]!='E';k++)
                {
                    cout<<s[k];
                }
                return 0;
            }
            else
            {
               cout<<"0.";
                for(rg i=1;i<=sum-1;i++)cout<<0;
                for(rg i=1;s[i]!='E';i++)
                {
                    if(s[i]=='.')continue;
                    else cout<<s[i];
                }
            }
        }
        else
        {
             rg sum=0;
            for(rg k=j+2;s[k];k++)
            {
                sum=sum*10+s[k]-48;
            }
            if(sum==0)
            {
                for(rg k=1;s[k]!='E';k++)
                {
                    cout<<s[k];
                }
                return 0;
            }
            else
            {
                rg tep=1;
                while(s[tep]=='0')tep++;
                //cout<<tep<<endl;
                //cout<<s[tep];
                ll check=j-i-1;
                if(check>sum)
                {
                    cout<<s[1];
                    ll flag=0;
                    //cout<<sum<<endl;
                    for(rg i=1;i<=sum;i++)
                    {
                        cout<<s[i+2];
                    }
                    cout<<'.';
                    for(rg i=sum+3;s[i]!='E';i++)cout<<s[i];
                }
                else
                {
                    ll flag=0;
                    //cout<<'a'<<endl;
                    for(rg i=tep;s[i]!='E';i++)
                    {
                        if(s[i]=='.')
                        {
                            continue;
                        }
                        cout<<s[i];
                    }
                    for(rg i=1;i<=sum-check;i++)cout<<0;
                }
            }
        }
    }
   	return 0;
}
>>>>>>> a45269a6f9ce61abed19a3dbc4d5ff91c7b4ed44
