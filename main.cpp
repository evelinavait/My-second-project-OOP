#include "functions.h"

int main()
{
    int c;
    srand(time(0));

//Student x;
//cin >> x;
//cout << x;
    cin.exceptions(std::istream::failbit);
    try
    {
        cout << "Iveskite studentu kieki: ";
        cin >> c;
        GetStudents(c);
    }


    catch(const ios_base::failure& e)
    {
        cout << "Netinkamai ivestas studentu kiekis" << endl;
        cout << e.what() << endl;
    }

    return 0;
}

//Settings -> Compiler -> Compiler Flags
