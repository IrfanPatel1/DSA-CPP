#include<iostream>
using namespace std;

int sum(int a,int b){
    int TotalSum=a+b;
    return TotalSum;//return use kiya hai kyuki yeh function ek integer return karega

}


int multipication(int x,int y,int z){
    int MultipicationOfThree=x*y*z;
    return MultipicationOfThree;
}

int main(){

    int ans=sum(5,10);//sum()function call hua hai aur A ka value 5 and B ka value 10 pass kiya hai
    cout<<ans<<endl;

    int Multi=multipication(5,5,10);
    cout<<Multi<<endl;



    return 0;
}

