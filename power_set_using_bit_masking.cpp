#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
 
void printpower(string str)
{

   int n=str.length();
    int powersize=pow(2,n);
    for(int counter=0;counter<powersize;counter++)
    {
      for(int j=0;j<n;j++)
      {
        if(counter&(1<<j))
           cout<<str[j];
      }
      printf("\n");
    }
}


int main()
{
        string s;
        cin>>s;
      printpower(s);
      cout<<"\n\n"<<" ";
       vector<char> v;
        //power set using bitwise
          int n=s.length();
         // int power=pow(2,n);
       for(int i=0;i<(1<<n);i++)
       {     
             for(int j=0;j<n;j++)
            {
             if(i&(1<<j))
               cout<<s[j];
             }

                //v.push_back(s[j]);
            
             cout<<"\n";
       }
       // for(auto it:v)
       // {
       //  cout<<it<<"\n";
       // }
    

  

}   
