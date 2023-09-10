#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i;space++)cout<<" ";
        int tempnum=i;
        for(int j=1;j<=i;j++){

            cout<<tempnum++;
        }
        
        tempnum--;
        for(int j=1;j<=i-1;j++){
            cout<<--tempnum;

        }
        cout<<endl;
    }
}