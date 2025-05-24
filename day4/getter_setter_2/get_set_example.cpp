#include <iostream>
using namespace std;

class Product
{
private:
    int quantity;       // Quantity of items purchased
    float pricePerItem; // Price of one item

public:
    // Setter function to set quantity and price
    void setProduct(int q, float price)
    {
        if (q > 0 && price > 0)
        {
            quantity = q;
            pricePerItem = price;
        }
        else
        {
            cout << "Invalid quantity or price!" << endl;
        }
    }

    // Getter function to return the total price
    float getTotalPrice()
    {
        return quantity * pricePerItem;
    }

    // Getter function to return quantity
    int getQuantity()
    {
        return quantity;
    }

    // Getter function to return unit price
    float getUnitPrice()
    {
        return pricePerItem;
    }
};

int main()
{
    Product item1;

    // Set values using setter
    item1.setProduct(3, 499.99); // 3 items at ₹499.99 each

    // Display output using getters
    cout << "Items Bought: " << item1.getQuantity() << endl;
    cout << "Price per Item: ₹" << item1.getUnitPrice() << endl;
    cout << "Total Cost: ₹" << item1.getTotalPrice() << endl;

    return 0;
}
