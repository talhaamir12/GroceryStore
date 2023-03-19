#include <iostream>
#include "Item.h"


class Cart
{
public:
    Cart();
    ~Cart();
    void addItem(Item newitem, int quantity);
    float calculateTotal();

private:
    int m_newitem;
    int m_quantity;
};