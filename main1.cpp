//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
#include<iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,s,p,q;
    cin>>n>>s>>p>>q;
    double a[n];
    int count=0;
    a[0]=s%(2^31);
    for(int i=1;i<n;i++)
        {
        a[i]=a[i-1]*p+(q%(2^31));
    }
     for (int i = 0; i != n; i++)
    { // Go through the list once.
        for (int j = 0; j != i; j++)
        { // And check if this number has already appeared in the list:
            if((i != j) && (a[j] == a[i]))
            { // A duplicate number!
                count++;
                break;
            }
        }
    }
    cout<<n-count;
    return 0;
}

