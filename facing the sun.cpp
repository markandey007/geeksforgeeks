#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     int count=1;
     int ma=arr[0];
     for(int i=1;i<n;i++)
     {
         if(arr[i]>ma)
         {
             count++;
             ma=arr[i];
         }
     }
     cout<<count<<endl;
     }
     //code
	return 0;
}
