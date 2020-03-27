#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED

#include <iostream>
#include <cstring>

class Product
{
private:
    char *name;
    int weight,price;
public:

    Product();
    Product(const char* name, const int weight, const int  price);
    Product( const Product &p );
    void setName(const char* name);
    void setWeight(const int weight);
    void setPrice(const int price);
    const char* getName()const;
    const int getWeight()const;
    const int getPrice()const;
    void print()const;
    ~Product();
    Product& operator=(const Product& p);
    friend bool operator==(const Product& left, const Product& right);
    friend bool operator>=(const Product& left, const Product& right);
    friend bool operator>(const Product& left, const Product& right);
    friend bool operator<(const Product& left, const Product& right);
    friend bool operator<=(const Product& left, const Product& right);
    friend bool operator!=(const Product& left, const Product& right);
    friend std::ostream& operator<< (std::ostream &out, const Product& p);
    friend std::istream& operator>> (std::istream &in, Product& p);
};


#endif // PRODUCT_H_INCLUDED
