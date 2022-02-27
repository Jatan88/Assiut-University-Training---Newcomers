/*

Solution By Jatan Shah
CF Handle : Jatan88
Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
Status : Accepted

*/

#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, i, flag = 0;
  cin>>n;

  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {

    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 0) cout<<"YES"<<"\n";
  else cout<<"NO"<<"\n";

  return 0;
}
