#include "FoodItem.h"

FoodItem::FoodItem(std::string expiry, string name, float price, string barCode):
    FoodItem(expiry, name, price, barCode, 0)

{

}

FoodItem::FoodItem(std::string expiry, string name, float price, string barCode, int limit):
    FoodItem(expiry, name, price, barCode, limit, 0)
{
    
}

FoodItem::FoodItem(std::string expiry, string name, float price, string barCode, int limit, float discountedPrice):
    FoodItem(expiry, name, price, barCode, limit, discountedPrice, 0)
{
    
}

FoodItem::FoodItem(std::string expiry, string name, float price, string barCode, int limit, float discountedPrice, float weight):
    Item(name, price, barCode, limit, discountedPrice, weight),
    m_expiry(expiry)
{
    
}

FoodItem::~FoodItem()
{

}