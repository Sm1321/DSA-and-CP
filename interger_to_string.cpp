#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#define ttc(t) int t; cin >> t; while (t--)
//#define int long long
#define ll long long
int max(int a, int b) { if(a > b) return a; else return b;}
int min(int a, int b) {if (a < b) return a; else return b;}
using namespace std;
    //recursion call 
  void rec_call(int num,string s[])
  {
     if(num==0)
       return ;
     int dig=num%10;
     rec_call(num/10,s);
     cout<<s[dig]<<" ";
  }

  
int  main()
   {       
      string s[]={"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
         rec_call(2034,s);
       return 0;  
      }
    

