# include<iostream>
# include<cmath>
using namespace std;
double volume(float r) {
    double vol = ((M_PI)*r * r);
    return vol;
}
int main() {
    float r = 3;
    cout << volume(r);
    return 0;
}