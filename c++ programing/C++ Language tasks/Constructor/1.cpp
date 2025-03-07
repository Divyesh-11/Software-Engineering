#include <iostream>

using namespace std;
class studnet
{
private:
    int id;
    string name;

public:
    studnet()
    {
        cout << "\nObject creted.";
    }
    ~studnet()
    {
        cout << "\nObject destoryed.";
    }
};
int main()
{

    studnet S1;
    return 0;
}