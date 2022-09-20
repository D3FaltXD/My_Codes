#include <bits/stdc++.h>
using namespace std;
bool ifpossible(vector<int> arr, int n, int m,int mid){
    int sc=1;
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }
        else{
            sc++;
            if(sc>m||arr[i]>mid){
                return false;
            }
        sum=arr[i];
        if(sc>m){
            return false;
        }
        }
    }
        return true;
}
long long allocateBooks(vector<int> arr, int n, int m) 
{	
    int s=0;
    int sum=0;
    for(auto i:arr){
        sum+=i;
    }
    int e=sum;
    int ans=-1;
        int mid=s+(e-s)/2;
    while(s<=e){
         
    if(ifpossible(arr,n,m,mid)) {
            //cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    vector<int>hello={48 ,90};
    cout<<allocateBooks(hello,4,2)<<endl;
}