/*

Solution By Jatan Shah
CF Handle : Jatan88
Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K
Status : Accepted

*/

#include <bits/stdc++.h>
using namespace std;

const int N = 0;

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            cout<<i<<"\n";
        }
    }
    return 0;
}
