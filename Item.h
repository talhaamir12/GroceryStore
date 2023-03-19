#include <string>
using namespace std;

class Item
{
public:
    Item();
    Item(string name, float price, string barCode, int limit = 0, float discountedPrice = 0, float weight = 0);
    ~Item(); 
    float GetPrice(){
        return m_price;
    }

private:
    float m_price;
    float m_discountedPrice;    
    float m_weight;
    string m_barCode;
    string m_name;
    int m_limit;

};