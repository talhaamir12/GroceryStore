#include "item.h"

class FoodItem : public Item
{
public:
    FoodItem(std::string expiry, string name, float price, string barCode);
    FoodItem(std::string expiry, string name, float price, string barCode, int limit);
    FoodItem(std::string expiry, string name, float price, string barCode, int limit, float discountedPrice);
    FoodItem(std::string expiry, string name, float price, string barCode, int limit, float fiscountedPrice, float weight);
    
    ~FoodItem();

private:
    std::string m_expiry;

};