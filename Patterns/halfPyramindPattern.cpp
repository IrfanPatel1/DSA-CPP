#include<iostream>
using namespace std;
int main(){

        int size;
        cout<<"Enter the size of pyramid:"<<endl;
        cin>>size;

        //outer loop
        for(int row=0;row<size;row++){

            //inner loop--columns
            for(int col=0;col<row+1;col++){
                cout<<"* ";
            }
            cout<<endl;
        }





    return 0;
}