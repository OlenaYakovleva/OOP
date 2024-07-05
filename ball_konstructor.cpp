#include <iostream>
#include <string>
using namespace std;

class Ball{
private:
    string m_color;
    double m_radius;
public:
    //konstruktor default --
    Ball(): m_color("red"), m_radius(20.0) {}
    
    Ball(string color): m_color(color), m_radius(20.0){}
    
    Ball (double radius): m_color("red"), m_radius(radius){}
    
    Ball(string color, double radius): m_color(color), m_radius(radius){}
    
    void print(){
        cout<<"color:"<<m_color<<" "<<"radius:"<<m_radius<<endl;
    }
};

int main(){
    Ball emptyBall;
    
    emptyBall.print();
    
    Ball colorBall("red");
    
    Ball radiusBall (25.0);
    
    Ball ball("Red", 25.0);
    
    
}
