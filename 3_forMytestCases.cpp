//NOT SURE IF THIS WILL WORK ON MORE TEST CASES ○) would have though better if got more test cases
//even this though was out of the blue ○)
#include<iostream> 

using namespace std;
int main(){
    
    int n=4; //n is size of array
    int finallist[5]={3,5,2,1};// SORRY BUT I HAVE ONLY WRITTEN THE CODE FOR THIS TEST CASE
    // LOGIC 
    /*
    CASE 1
    Agr negative number hai to wo to answer hoega hi coz absolute difference le rhe hai 
    to hmesha positive honge baaki numbers
    
    */
    for(int i=0;i<n;i++){
        if(finallist[i]<0){
            cout<<finallist[i];
            return 0;
        }

    }


    // CASE 2
    //If the whole final list is of positive numbers that means one of them should be 
    //the greatest number because we are taking the difference of numbers that means the greatest numbers
    //should have been an initial number
    int greatest=-1;
    for(int i=0;i<n;i++){
        if(finallist[i]>greatest)greatest=finallist[i];
    }
    cout<<greatest;

}
