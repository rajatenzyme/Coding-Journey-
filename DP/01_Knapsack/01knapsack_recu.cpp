#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[], int val[], int w, int n)
{
    if(n==0 || w == 0)
    return 0;

    if(wt[n-1]<=w)
    {
        return max( (val[n-1] + knapsack(wt, val, w-wt[n-1], n-1 )), knapsack(wt, val, w, n-1) );
    }
    else 
    {
    return knapsack(wt, val, w, n-1);
    }
}

int main()
{

int wt[4] = {1,3,4,5};
int val[4] = {1,4,5,7};
int w = 7;
int ans = knapsack(wt, val, w, 4);
cout<<ans;
}