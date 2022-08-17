# include<iostream>
using namespace std;


void display1(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

}

void display2(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

}

int main() {
    int n;
    cin >> n;
    display2(n);
    display1(n);
    // display2(n);
    return 0;
}