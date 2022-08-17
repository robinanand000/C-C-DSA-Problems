#include <iostream>
#include <math.h>
using namespace std;

class dist
{
    float x;
    float y;

public:
    float point(float a, float b)
    {
        cout << "Enter the co-ordinates :" << endl;
        cin >> a >> b;
        x = a;
        y = b;
    }

    void display()
    {
        cout << "The co-ordinates are x,y=(" << x << "," << y << ")." << endl;
    }
    float sum(dist o1, dist o2)
    {
        float n, sq;
        x = (o2.x - o1.x);
        y = (o2.y - o1.y);
        n = (x * x) + (y * y);
        sq = sqrt(n);
        cout << "Distance between these two points is :" << sq << endl;
    }
};

int main()
{
    float x, y;
    dist d1, d2, d3;
    d1.point(x, y);
    d1.display();

    d2.point(x, y);
    d2.display();

    d3.sum(d1, d2);

    return 0;
}