#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#define ttc(t) int t; cin >> t; while (t--)
//#define int long long
#define ll long long
int max(int a, int b) { if(a > b) return a; else return b;}
int min(int a, int b) {if (a < b) return a; else return b;}
using namespace std;

void print_sub(int ind,int n,vector<char>&sub,string s)
{
  //it has (2^n*n) time complexity
        if(ind==n)
        {
          for(auto it:sub)

             cout<<it;
          cout<<'\n';
          return ;
        }
        sub.push_back(s[ind]);
        print_sub(ind+1,n,sub,s);
        sub.pop_back();
        print_sub(ind+1,n,sub,s);
}
//this function used to count the number of seq whose sum is k
void  print_sub(int ind,int n,int sum,int &cnt,int k,vector<char>&sub,string s)
{
  //it has (2^n*n) time complexity
        if(ind==n)
        {
          if(sum%k==0)
              cnt++;
          return;
        }
        sub.push_back(s[ind]);
        print_sub(ind+1,n,sum+(s[ind]),cnt,k,sub,s);
        sub.pop_back();
        print_sub(ind+1,n,sum,cnt,k,sub,s);
}

  int count_the_number_ofsubseq(int ind,int sum,int n,string s)
  {
     if(ind==n)
     {
         if(sum%5==0)
         return 1;

        return 0;
     }

     return count_the_number_ofsubseq(ind+1,sum+s[ind],n,s)+count_the_number_ofsubseq(ind+1,sum,n,s);
  }
int  main()
   {       
     int n;
     cin>>n;
        string s;
        cin>>s;
        vector<char>sub;
      print_sub(0,n,sub,s);
      cout<<'\n';
        int cnt=0;
    print_sub(0,n,0,cnt,5,sub,s);
      cout<<cnt<<" ";
    int c=0;
    int s1=0;
    cout<<count_the_number_ofsubseq(0,s1,n,s);
       return 0;  
    }

