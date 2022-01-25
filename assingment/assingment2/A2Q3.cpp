#include <iostream>

using namespace std;

int main()
{
    //YES WE CAN HANDLE THE PROBLEM WITH SWITCH BUT BEFORE USING IT WE STILL HAVE TO USE IF-ELSE
    // SO USING SWITHCH  MAKES NO SENSE AS:
    //switch statements the case takes value of a const i.e :a,1,23 etc.
    //it cannot take the expression as a value i.e t>20&&t<30;
    //therfore its is better to use if else although
    // we can still use switch by assining constant values to the expressions but it makes no sense
    float magnitude;
    cin >> magnitude;
    if(magnitude<5)
        cout<<"little or no damage\n";
    else if ( magnitude >= 5 && magnitude < 5.5)
        cout<<"some damage\n";
    else if ( magnitude >= 5.5 && magnitude < 6.5)
        cout<<"Serious damage: walls may crack or fall\n";
    else if ( magnitude >= 6.5 && magnitude < 7.5)
        cout<<"Disaster: houses and buildings may collapse\n";
    else
        cout<<"Catastrophe: most buildings destroyed\n";
        
}