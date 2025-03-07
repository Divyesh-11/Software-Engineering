#include <iostream>
#include <fstream>
using namespace std;

int main()
{


    ofstream myfile("second.txt");
    myfile << "This is my secound file in c++ language.";
    myfile << "\nc++ language is fastes for c language.";
    myfile << "\nc++ language is memroy adjusteble language.";
    myfile.close();

    string text;
    ifstream infile("second.txt");

    while (getline(infile, text))
    {
        cout << text << endl;
    }

    infile.close();

    return 0;
}
