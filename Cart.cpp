#include "Cart.h"
#include "Item.h"
//using namespace std;

int arr[];

Cart::Cart()
{

}

Cart::~Cart()
{

}

void Cart::addItem(Item newitem, int quantity)
{
    for (int k = 1; k <= quantity; k++) {
        arr[k] = newitem;
    }
}

float Cart::calculateTotal()
{
    float x;
    for (int i = 1; i<= arr.size(); i++) {
        x += arr[i].GetPrice();
    }
}