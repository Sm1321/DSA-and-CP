#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
int mod = (int)(1e9 + 7); 
#define int long long


vector<int>fact(100000);


void facto_pre()
{
   fact[0]=1;
    for(int i=1;i<=100000;i++)
    {
       fact[i]=(i*fact[i-1])%mod;

    }
     
}

int powermodulo(int base,int x,int mod1)
{

     int ans=1;
      while(x)
      {
        if(x%2)
        { ans=(ans*base)%mod1;
          x=x-1;
        }
        else
        {
         base=(base*base)%mod1;
          x/=2;
        }

      }
      return ans;
}







int ncr(int n,int r)
{
    int ans=1;
    ans=(ans*fact[n])%mod;
    int den=(fact[n-r]*fact[r])%mod;
     ans=(ans*powermodulo(den,mod-2,mod))%mod;

     return ans;
}









#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
int mod = (int)(1e9 + 7); 
#define int long long


vector<int>fact(100000);

//finf the prefix of the factorials 
void facto_pre()
{
   fact[0]=1;
    for(int i=1;i<=100000;i++)
    {
       fact[i]=(i*fact[i-1])%mod;

    }
     
}
//power modulo function to ncr
int powermodulo(int base,int x,int mod1)
{

     int ans=1;
      while(x)
      {
        if(x%2)
        { ans=(ans*base)%mod1;
          x=x-1;
        }
        else
        {
         base=(base*base)%mod1;
          x/=2;
        }

      }
      return ans;
}






//ncr implementation
int ncr(int n,int r)
{
    int ans=1;
    ans=(ans*fact[n])%mod;
    int den=(fact[n-r]*fact[r])%mod;
     ans=(ans*powermodulo(den,mod-2,mod))%mod;

     return ans;
}

signed main()
{  
   facto_pre();
  int t;
   cin>>t;
   while(t--)
   {
      int p,q;
      cin>>p>>q;
     cout<< ncr(p+q-2,q-1)<<'\n';
      


   }






  return 0;
}

signed main()
{  
   facto_pre();
  int t;
   cin>>t;
   while(t--)
   {
      int p,q;
      cin>>p>>q;
     cout<< ncr(p+q-2,q-1)<<'\n';
      


   }






  return 0;
}
