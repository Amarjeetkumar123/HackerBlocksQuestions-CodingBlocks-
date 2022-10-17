#include <iostream>
#include<string>
#include<ctype.h>
#include<bits/stdc++.h>
using namespace std;
char mapping[][27]={"", "A", "B", "C", "D", "E", 
        "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", 
        "S", "T", "U", "V", "W", "X", "Y", "Z"}; 

		
        void change(string str,string osf,int count)
        {   int s=str.length();
            if(count == s)
            {
                cout<<osf<<endl;
                return;
            }
            if(str[count]!='0')
            {
                  int num=str[count]-'0';
                  string ch=mapping[num];
                 change(str,osf+ch,count+1);
            }
           if(count<s-1)
           {
              int num2=str[count]-'0';
               int num3=str[count+1]-'0';
               int num4=(num2*10)+(num3);
               if(num4<=26)
               {
                    string ch1=mapping[num4];
                   change(str,osf+ch1,count+2);
               }
           }
             
     }
int main() {
  string str;
  cin>>str;
  change(str,"",0);
}
