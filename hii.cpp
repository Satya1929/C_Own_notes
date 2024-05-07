#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
    
    int counter;           //counting for loops
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop cafe;
    cafe.initCounter();
    cout << "Starting with"<<cafe << endl;
    for (int i = 0; i < counter; i++)
    {
        cafe.setPrice();
    }
    cafe.displayPrice();

    // Shop grocery;
    // grocery.initCounter();
    // cout << "Starting with"< grocery << endl;
    // for (int i = 0; i < counter; i++)
    // {
    //     grocery.setPrice();
    // }
    // grocery.displayPrice();   

    // Shop medicne;
    // medicne.initCounter();
    // cout << "Starting with"<< medicine << endl;
    // for (int i = 0; i < counter; i++)
    // {
    //     medicine.setPrice();
    // }
    // medicne.displayPrice();   

    if (i=0:i)
    {
        /* code */
    }
    

    return 0;
}
