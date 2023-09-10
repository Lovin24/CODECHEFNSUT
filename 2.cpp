#include<iostream>
using namespace std;
int main(){
    //First we will get the prefix sum array
    int n;
    cin>>n;
    int arr[n];
    cout<<"ENTER ARRAY ELEMENTS : ";
    for(int i=0;i<n;i++)cin>>arr[i];
    //now arr contains the user array
    //we wont use another array lets use the curr array and modify it as
    for(int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    //printed array for confimation for(int i=0;i<n;i++)cout<<arr[i]<<" ";

    //THOUGHT PROCESS FOR THE SOLUTION

    /* the range is given as [l,r] so to add all the elements from l to r
    in the orignal array but that will be time consuming 
    so we made an array that is PREFIX SUM ARRAY
    Now if you observe the sum of elements from l to r in the original array is
    equal to r index - (l-1) index element in the  modified PREFIX SUM ARRAY this
    observation i got when i wrote on a copy ○) i can't explain much but the observation was
    the sum is contained within the r index but we will have to get rid of the elements
    we dont need that means we will have to get rid of the sum of the elements before l
    that is contained within l-1
    */
    int l,r;
    cout<<"ENTER (l r) : ";
    cin>>l>>r;
    //BY RUNNING CODE ON l=0 we will be accessing -1 index so..
    if(l==0) cout<<arr[r];
    else cout<<arr[r]-arr[l-1];
    //running perfectly
}