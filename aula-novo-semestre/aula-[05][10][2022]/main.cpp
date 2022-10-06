#include <iostream>
#include <vector>
#include "point2d.hpp"

using namespace std;

int main()
{
    Point2d p1;
    Point2d p2;
    Point2d p3;
    Point2d p4;
    
    p1.SetX(10);
    p1.SetY(10);
    
    p2.SetX(20);
    p2.SetY(20);

    p3.SetX(30);
    p3.SetY(30);

    p4.SetX(40);
    p4.SetY(40);
    
    p1.ShowInfo();
    p2.ShowInfo();
    p3.ShowInfo();
    p4.ShowInfo();
    
    p1.Update(15, 33);

    return 0;
}
