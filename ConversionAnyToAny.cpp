#include <bits/stdc++.h>

using namespace std;

#define int long long

int convertToDecimal(int num,int sn) {
    int temp = num,count=0,digit,decNum=0;
    while(temp>0) {
        digit = temp % 10;
        decNum = decNum + digit * pow(sn,count);
        count++;
        temp = temp / 10;
    }
    return decNum;
}

int decimalToRequired(int decNum, int ds) {
    int temp,dsNum=0,p=1,digit;
    temp = decNum;
    while(temp>0) {
        digit = temp % ds;
        dsNum = digit * p + dsNum;
        p=p*10;
        temp = temp/ds;
    }
    return dsNum;
}

signed main()
{
    int sn,ds,num;
    // cout<<"Enter the base which is to be converted: ";
    cin>>sn;
    // cout<<"\nEnter the base in which it is to be converted: ";
    cin>>ds;
    // cout<<"\nEnter the number:";
    cin>>num;
    int decimalConversion = convertToDecimal(num,sn);
    int convertedNum = decimalToRequired(decimalConversion,ds);
    if(ds==10) {
        cout<<decimalConversion;
    }
    else {
        cout<<convertedNum;
    }
    return 0;
}