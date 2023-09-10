//somebody else might have written a simpler code but this works as well ○)
#include<iostream>
using namespace std;
int main(){
    int n;cin>>n; //Taking input for rows
    for(int col=1;col<=n;col++){   //looping for colums
        for(int space=1;space<=n-col;space++)cout<<" "; //looping for spaces 
                                                        //observing space is 'col' less than the column
        int tempnum=col-1;     //initialized a variable for printing num
        for(int j=1;j<=col;j++){ // looping for printing till the middle part

            cout<<++tempnum;
        }
                                //! WE HAVE USED ONLY SINGLE VARIABLE TO KEEP TRACK OF PRINTIN NUMBERS 
        
        for(int j=1;j<=col-1;j++){ //looping for printing the other numbers after middle part

            cout<<--tempnum;

        }
        cout<<endl;
    }
}
