#include <iostream>
using namespace std;

class shop
{
private:
    int itemId[100];
    int itemprice[100];
    int counter;
    void setPrice(void);

public:
    void displayPrice(void);
    void initCounter(void) { counter = 0; }
    void display(void);
};

void shop::display(void)
{
    {
        int n;
        cout << "Enter total number of products :";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            setPrice();
        }
    }
}
void shop::setPrice(void)
{
    cout << "Enter Id of your product no " << counter + 1 << "." << endl;
    cin >> itemId[counter];
    cout << "Enter the Price of your product :" << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of product with productId " << itemId[i] << " is Rs." << itemprice[i] << endl;
    }
}

int main()
{
    shop a;
    a.initCounter();
    a.display();
    a.displayPrice();
    return 0;
}