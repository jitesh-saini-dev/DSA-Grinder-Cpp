#include<iostream>
using namespace std;
int main(){
   cout<<"Menu "<<endl;
   cout<<"1. Pizza "<<endl;
   cout<<"2. Burger "<<endl;
   cout<<"3. Momos "<<endl;
   cout<<"4. Coffee"<<endl;
   int order;
   cout<<"Enter items you want to order  "<<endl;
   cin>>order;
   int piztotal=0;
   int butotal=0;
   int momostotal=0;
   int coffeetotal=0;
   for(int i=1;i<=order;i++){
       int itemno;
       cout<<"enter item number "<<endl;
       cin>>itemno;
       int quantity;
       cout<<"enter quantity "<<endl;
       cin>>quantity;
       if(itemno==1){
           piztotal+=quantity*200;
       }else if(itemno==2){
           butotal+=quantity*100;
       }else if(itemno==3){
           momostotal+=quantity*80;
       }else if(itemno==4) {
           coffeetotal+=quantity*120;
       }
   }
   int total=piztotal+butotal+momostotal+coffeetotal;
   if(piztotal==0 && butotal==0 && momostotal==0 && coffeetotal!=0){
       int discount=(total*20)/100;
       total-=discount;
   }
   if(total<500){
       total+=50;
   }
   cout<<"total price is "<<total;
}