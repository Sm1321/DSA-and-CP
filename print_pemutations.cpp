#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#define ttc(t) int t; cin >> t; while (t--)
//#define int long long
#define ll long long
int max(int a, int b) { if(a > b) return a; else return b;}
int min(int a, int b) {if (a < b) return a; else return b;}
using namespace std;



   void  print_permuataions_app1(int ind,string ans,string s,map<int,int>&mpp)
     {
       if(ind==s.size())
         {
          cout<<ans<<"\n";
          return ;
         }
         for(int i=0;i<s.size();i++)
         {
           if(!mpp[i])
           {
             mpp[i]=1;
             ans+=s[i];
              print_permuataions_app1(ind+1,ans,s,mpp);
             mpp[i]=0;
             ans.pop_back();
            }
         }


     }





   //time complexity:-(n*n!)
     //we are using foe loop in this so o(n) and n! for printing all the permuataions
    void print_permutation(string s,int ind)
    {
           if(ind==s.size())
            {
                cout<<s<<"\n";
                return ;
            }

            for(int i=ind;i<s.size();i++)
            {
                swap(s[ind],s[i]);//first swap ans call
                 print_permutation(s,ind+1);
                 swap(s[ind],s[i]);
                 //backtracking step

            }

    }


    int  main()
      {       
           
          string s;
          cin>>s;
          //print_permutation(s,0); //pemutationn approch aone
          string ans="";
          map<int,int>mpp;
          print_permuataions_app1(0,ans,s,mpp);  
            //permuatauion approch two



      }

