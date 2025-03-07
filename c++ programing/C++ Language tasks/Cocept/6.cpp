#include<iostream>

using namespace std;
class shape // base class or abstract class 
{
    public:
            virtual void draw() = 0; // Pure virtual function declered

};
class circle : public shape
{
    public : 
            void draw()
            {
                cout<<"\nWelcome the draw function.";
            }

};
class square :public shape
{
    public :
            void draw()
            {
                cout<<"\nWelcome the square class.";
            }

};
int main(){

    shape *s;
    circle c;
    s = &c; 
    s->draw();
    square s1;
    s=&s1;
    s->draw();
    return 0;
}