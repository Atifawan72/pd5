#include <iostream>
#include<cmath>
using namespace std;
float pyramidVolume(float a, float b, float c);
main()
{
    float x, y, z, volume;
    string unit;
    cout << "Enter the lenght of the pyramid(in meters): ";
    cin >> x;
    cout << "Enter the width of the pyramid: ";
    cin >> y;
    cout << "Enter the height of the pyramid: ";
    cin >> z;
    cout << "Enter the dsired output unit(millimeter, cdentimeter, meters, kilometers): ";
    volume = pyramidVolume(x, y, z);
    cout << "The volume of pyramid is: " << volume << " cubic" << unit;
}
float pyramidVolume(float a, float b, float c)
{
    string units;
    cin>>units;
    float cubic = (a * b * c)/3;
    if(units=="centimeters"){
        cubic=cubic*(pow(10,6));
    }
    else if(units=="kilometers"){
        cubic=cubic/(pow(1000,3));
    }
    else if (units=="millimeters"/* condition */)
    {
        cubic=cubic*pow(10,9) /* code */;
    }
    else if(units=="meters"){
        float cubic = (a * b * c)/3;
    }
    
    return cubic;
}
