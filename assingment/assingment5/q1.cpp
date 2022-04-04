// *1. Imagine a publishing company that markets both book and audiocassette versions of its
// works. Create a class publication that stores the title (a string) and price (type float)
// of a publication. From this class derive two classes: book, which adds a page count (type
// int), and tape, which adds a playing time in minutes (type float). Each of these three
// classes should have a getdata() function to get its data from the user at the keyboard,
// and a putdata() function to display its data.
#include <iostream>

using namespace std;

class publication{
    private:
      string name;
      int cost;
    public:
        void getdata(){
            cout<<"enter the name and cost: ";
            cin >>name>>cost;
        }
};

class book: public publication{
    private:
         int page_count;
    public:
    void getdata_b(){
            cout<<"enter the page count of the book : ";
            cin >>page_count;
    }
};
class tape:public publication{
    private:
         int min;
    public:
    void getdata_t(){
            cout<<"enter the length of the tape in min : ";
            cin >>min;
    }
};


int main()
{
    book b1;
    b1.getdata(); // getdata is a function of base class that can be accessed in the derived class 
}