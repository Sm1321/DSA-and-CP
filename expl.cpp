#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#define ttc(t) int t; cin >> t; while (t--)
//#define int long long
#define ll long long
int max(int a, int b) { if(a > b) return a; else return b;}
int min(int a, int b) {if (a < b) return a; else return b;}
using namespace std;


int string_to_int(char str[],int n)
{
   if(n==1) 
     return str[0]-'0';

   int lastdig=(str[n-1]-'0');
   
   return (lastdig)+string_to_int(str,n-1)*10;
}

void push_largest(int a[],int n,int i)
{
   if(i==n-1)
     return;

   if(a[i]>a[i+1])
     swap(a[i],a[i+1]);
   push_largest(a,n,i+1);
}

void bubblesort(int a[],int n,int i)
{

    if(i==n-1)
       return;
     push_largest(a,n,0);
     bubblesort(a,n,i+1);
}


string movetotheend(string str)
{
     if(str=="")
       return "";
   string firstchar=str.substr(0,1);

  string substr=str.substr(1);
  string nextchar=movetotheend(substr);

   if(nextchar=="x")
        {
           return nextchar+firstchar;
          
        }
        else
        {
         return firstchar+nextchar;
        }


}
 
 void replacepi(char inp[],int i)
 {
   if(inp[i]=='\0')
     {
      return ;
     }
   //checking the condition 
     if(inp[i]=='p' &&inp[i+1]=='i')
     {
     
      int j=i+2;
      //count the length of the string 
      while(inp[j]!='\0')
      {
       j++;
      }
      //shifting the characters
      while(j>=i+2)
      {
        inp[j+2]=inp[j];
        j--;
      }
     inp[i]='3';
     inp[i+1]='.';
     inp[i+2]='1';
     inp[i+3]='4';
     replacepi(inp,i+4);
     //calling for the next string
   }
     //if the first two are not pi
     else
      {
      replacepi(inp,i+1); 

      }
     

 }

int main()
 {

   char str[100]="apiixox";
    //movetotheend(str);
    replacepi(str,0);
    cout<<str<<"\n";
   
 }
