#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int Find(int L,int R,int A[])
{
    int sum = 0;
    for ( int i = L-1 ; i< R; i++)
    {
        sum = sum + abs(A[i]);
    }
    return sum;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i= 0; i<n ; i++){
        cin>>a[i];
    }
    int l,r;
    int s = 0;
    while(t--){
        cin>>l>>r;
        s = Find(l,r,a);
        if(s%2){
            cout<<"Odd"<<endl;
        }
        else{
            cout<<"Even"<<endl;
        }
    }
    return 0;
}