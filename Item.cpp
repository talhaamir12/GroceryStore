#include "Item.h"
//using namespace std;

Item::Item(string name, float price, string barCode, int limit, float discountedPrice, float weight):
    m_name(name),
    m_price(price),
    m_barCode(barCode),
    m_limit(limit),
    m_discountedPrice(discountedPrice),
    m_weight(weight)
{

}

Item::~Item()
{

}