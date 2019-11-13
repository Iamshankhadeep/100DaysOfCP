#include<bits/stdc++.h>
using namespace std;

int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int main(){
    int a;
    cin>>a;
    while(a--){
        int k;
        cin>>k;
        vector<int> v(k);
        long long int lk;
        for (int i = 0; i < k; i++)
        {
            cin>>lk;
            v[i]=convertBinaryToDecimal(lk);
        }
        lk=v[0];
        for (int i = 1; i < k; i++)
        {
            //cout<<v[i]<<" ";
            lk= lk ^ v[i];
        }
        cout<<__builtin_popcount(lk)<<endl;      
    }
}