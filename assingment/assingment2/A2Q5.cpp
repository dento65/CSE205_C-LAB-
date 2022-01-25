#include <iostream>

using namespace std;

int main()
{
    int pno;
    float gepermile,oreading;
    cout<<"(1) Carbon monoxide\n(2) Hydrocarbons\n(3) Nitrogen oxides\n(4) Nonmethane hydrocarbons\n";
    cout<<"Enter pollutant number>> ";
    cin>>pno;
    cout<<"Enter number of grams emitted per mile>>\n";
    cin>>gepermile;
    cout<<"Enter odometer reading>";
    cin>>oreading;
    if(oreading<50000)
    switch(pno)
    {
        case 1:
        {
            if(oreading<50000)
            {
            if(gepermile>3.4)
            cout<<"Emissions exceed permitted level of 3.4 grams/mile";
            else
            cout<<"Emissions within permitted level of 3.4 grams/mile";
            break;
            }
            else
            {
            if(gepermile>4.2)
            cout<<"Emissions exceed permitted level of 4.2 grams/mile";
            else
            cout<<"Emissions within permitted level of 4.2 grams/mile";
            break;
            }
        }
        case 2:
        {
            if(oreading<50000)
            {
            if(gepermile>0.31)
            cout<<"Emissions exceed permitted level of 0.31grams/mile";
            else
            cout<<"Emissions within permitted level of 0.31 grams/mile";
            break;
            }
            else
            {
            if(gepermile>0.39)
            cout<<"Emissions exceed permitted level of 0.39grams/mile";
            else
            cout<<"Emissions within permitted level of 0.39grams/mile";
            break;
            }
            
            
        }
        case 3:
        {
            if(oreading<50000)
            {
            if(gepermile>0.4)
            cout<<"Emissions exceed permitted level of 0.4grams/mile";
            else
            cout<<"Emissions within permitted level of 0.4 grams/mile";
            }
            else
            {
            if(gepermile>0.5)
            cout<<"Emissions exceed permitted level of 0.5grams/mile";
            else
            cout<<"Emissions within permitted level of 0.5grams/mile";
            }
        }
        case 4:
        {
            if(oreading<50000)
            {
            if(gepermile>0.25)
            cout<<"Emissions exceed permitted level of 0.4grams/mile";
            else
            cout<<"Emissions within permitted level of 0.4 grams/mile";
            }
            else
            {
            if(gepermile>0.31)
            cout<<"Emissions exceed permitted level of 0.31grams/mile";
            else
            cout<<"Emissions within permitted level of 0.31grams/mile";
            }
        }
    }
}
