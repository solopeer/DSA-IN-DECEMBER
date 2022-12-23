#include <bits/stdc++.h>
using namespace std;

int KthLargest(vector <int> &a , int &k)
{
    int n = a.size();
    //kth largest = element on (n - k) index
    sort(a.begin() , a.end());
    return a[n - k];
}

int main()
{
    vector <int> a = {4 , 2 , 5 , 3 , 1};
    int k = 2;
    cout << KthLargest(a , k) << '\n';
}
