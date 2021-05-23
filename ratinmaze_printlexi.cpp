#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#define ttc(t) int t; cin >> t; while (t--)
//#define int long long
#define ll long long
int max(int a, int b) { if(a > b) return a; else return b;}
int min(int a, int b) {if (a < b) return a; else return b;}
using namespace std;
/*
void print_lexi(int x,int n)
{   //bade case
      if(x>n)
         return;
      // last value upto n
       if(x==n)
          {
            cout<<x<<"\n";
            return;
          }
          //self work 
          if(x!=0)
             {
              cout<<x<<"\n";
             }

        for(int i=(x==0)?1:0;i<=9;i++)
        {
          print_lexi(10*x+i,n);
        }     
}

*/

  int ratintmaze(int cr,int cc,int er,int ec,string s)
  {
     if(cr==er && cc==ec)
     {
      cout<<s<<"\n";
      return 1;
     }
     if(cr>er ||cc>ec)
     {

      return 0;
     }
   int ftry=ratintmaze(cr,cc+1,er,ec,s+"R");
   int stry=ratintmaze(cr+1,cc,er,ec,s+"D");
    return ftry+stry;

  }


     int  main()
  { 

     string s;
      int n,m;
       cin>>n>>m;
     cout<<ratintmaze(0,0,n-1,m-1,s);

        return 0;
      }
