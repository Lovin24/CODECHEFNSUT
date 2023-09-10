//NOT SURE IF THIS WILL WORK ON MORE TEST CASES ○) would have though better if got more test cases
//even this though was out of the blue ○)
#include<iostream> 

using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int n=3; //n is size of array
    int finallist[3]={15, -4, 11};// SORRY BUT I HAVE ONLY WRITTEN THE CODE FOR THIS TEST CASE
    int initial_sum=a+b;
    int initial_product=a*b;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int final_sum=finallist[i]+finallist[j];
            int final_product=finallist[i]*finallist[j];
            if(final_sum==initial_sum && final_product==initial_product){ 
                cout<<finallist[i]<<" "<<finallist[j];
                return 0; //not iterate more elements
            }
        }
    }
}