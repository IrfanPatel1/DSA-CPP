#include <iostream>
using namespace std;

int main(){
    char grade;
    cout<<"Enter your Grade"<<endl;
    cin>>grade;


    // if(grade=='A'){
    //     cout<<"Your Marks would be in range of 90 to 100"<<endl;
    // }
    // else if(grade=='B'){
    //     cout<<"Your Marks would be in range of 80 to 90"<<endl;
    // }
    // else if(grade=='C'){
    //     cout<<"Your Marks would be in range of 70 to 80"<<endl;
    // }
    // else if(grade=='D'){
    //     cout<<"Your Marks would be in range of 60 to 70"<<endl;
    // }
    // else {
    //     cout<<"Your Marks would be in range of 0 to 60 "<<endl;
    // }


    switch (grade)
    {
    case 'A':cout<<"Your Marks would be in range of 90 to 100"<<endl;
    break;
    case 'B':cout<<"Your Marks would be in range of 80 to 90"<<endl;
    break;
    case 'C':cout<<"Your Marks would be in range of 70 to 80"<<endl;
    break;
    case 'D':cout<<"Your Marks would be in range of 60 to 70"<<endl;
    break;
    default:
        cout<<"Your Marks would be in range of 0 to 60 "<<endl;
    }


    return 0;
}