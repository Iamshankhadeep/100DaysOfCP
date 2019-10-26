#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int T;
    unsigned long long int a, b;
    cin >> T;
    while(T--)
    {
        cin >> a >> b;
        /* 
        Eliminate all common bits on the right hand side. This will start with 1.
        For example given binary a = 10100 and binary b = 10001; 
        Xor will eliminate the leading '10 portion';
        result c will be 101; That is three significant bits.

        */
        unsigned long long int c = a ^ b; 
        //cout<<c<<" ";

        /*
        Create a working variable temp as 1.
        */

        unsigned long long int temp = 1;
        
        while(c != 0)
        {
            c = c >> 1; //In our example c has 3 bits. So this will cause the loop to run 3 times.
            temp = temp << 1; //We keep appending a 0 to binary temp. This will finally lead to 1000.
        }

        temp --; //we decrement this to get a long sequence of set bits. This will give us 111. Three set bits, same size as the XOR

        cout << (a | temp) << "\n"; //OR of original a and temp will give us a binary sequence which will have all the common leading bits of a and b, followed by set bits.
    }
}