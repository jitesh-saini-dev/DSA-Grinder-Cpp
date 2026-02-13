#include<iostream>
using namespace std;
int main(){
    int vehicle;
    cout<<"enter number of vehicles "<<endl;
    cin>>vehicle;
      
    if(vehicle<0){
        cout<<"You entered -ve entry!!";
        return 0;
    }
    if(vehicle>10){
        cout<<"not entry";
        return 0;
    }
    cout<<"menu:-"<<endl;
    cout<<"1. BIKE "<<endl;
    cout<<"2. CAR "<<endl;
    cout<<"3. TRUCK "<<endl;
    int cartotal=0;
    int biketotal=0;
    int trucktotal=0;
    for(int i=1;i<=vehicle;i++){
        string name;
        cout<<"enter "<<i<< " vehicle name "<<endl;
        cin>>name;
        if(name!='bike' && name!='car' && name!='truck'){
            cout<<"You entered vehicle out of the Menu!!"
        };
        int hours;
        cout<<"enter number of hours your parked "<<endl;
        cin>>hours;
        if(name=="car"){
            cartotal+=hours*50;
        }
        else if(name=="bike"){
            biketotal+=hours*20;
        }
        else if(name=="truck"){
            trucktotal+=hours*100;
        }
    }
    int total=cartotal+biketotal+trucktotal;
    if(total>500){
        int discount=total*0.1;
        total-=discount;
    }
    cout<<"total bill is "<<total;
}