#include<iostream>
using namespace std;
float taxcalcualtor(char type, float price);
main(){
    char type;
    float price,totalprice;
    cout<<"Enter the vehicle type code(M, E, S, V, T): ";
    cin>>type;
    cout<<"Enter the price of the vehicle: $";
    cin>>price;
    totalprice=taxcalcualtor(type,price);
    cout<<"The final price of vehicle of type "<<type<<" after adding the tax is $"<<totalprice;
}
float taxcalcualtor(char type, float price){
    float taxamount, taxrate, itemprice;
    if(type =='M'){
         taxamount=price*(0.06);
    }
    else if(type=='E'){
        taxamount=price*(0.08);
    }
    else if(type=='S'){
        taxamount=price*(0.1);
    }
    else if(type=='V')
    {
        taxamount=price*(0.12);
    }
    else if(type=='T')
    {
        taxamount=price*(0.15);
    }
    itemprice=price+taxamount;
    return itemprice;
}