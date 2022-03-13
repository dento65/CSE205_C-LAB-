#include <iostream>

using namespace std;

struct room
{
    float l, b, h; // lenght, breadth and height of room
    float volume;  //volume
};
int main()
{
    room r1;
    cout << "Enter the the lenght,breadth and height of room(in feets): ";
    cin >> r1.l >> r1.b >> r1.h;
    r1.volume = r1.l * r1.b * r1.h;
    cout << "the volume of the room is " << r1.volume << " cubic feet";
}