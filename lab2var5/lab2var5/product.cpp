#include"product.h"
using namespace std;

Product::Product():Product("Unknown",1,1) {}

Product::Product(const char* name, const int weight, const int  price)
{
    this->name=0;
    setName(name);
    setWeight(weight);
    setPrice(price);
}

Product::Product(const Product &p):Product(p.name,p.weight,p.price) {}

void Product::setName(const char* name)
{
    delete[] this->name;
    this->name= new char[strlen(name)+1];
    strcpy(this->name,name);
}
void Product::setWeight(const int weight)
{
    if (weight>0)
        this->weight=weight;
}
void Product::setPrice(const int price)
{
    if ( price > 0 )
        this->price=price;
}
const char* Product::getName()const
{
    return this->name;
}
const int Product::getWeight()const
{
    return this->weight;
}
const int Product::getPrice()const
{
    return price;
}
void Product::print()const
{
    cout<<"Name: "<<this->name<<endl;
    cout<<"Weight: "<<this->weight<<endl;
    cout<<"Price: "<<this->price<<endl;

}
Product::~Product()
{
    delete[] this->name;
}
Product& Product::operator=(const Product& p)
{
    if (this == &p)
    {
        return *this;
    }
    else
    {
        setName(p.getName());
        setWeight(p.getWeight());
        setPrice(p.getPrice());
        return *this;
    }
}
bool operator==(const Product& left, const Product& right)
{
    double worthLeft=left.getPrice()*1.0/left.getWeight();
    double worthRight=right.getPrice()*1.0/right.getWeight();
    if (worthLeft==worthRight)
    {
        return true;
    }
    else
        return false;
}
bool operator>=(const Product& left, const Product& right)
{
    double worthLeft=left.getPrice()*1.0/left.getWeight();
    double worthRight=right.getPrice()*1.0/right.getWeight();
    if (worthLeft>=worthRight)
    {
        return true;
    }
    else
        return false;
}
bool operator>(const Product& left, const Product& right)
{
    double worthLeft=left.getPrice()*1.0/left.getWeight();
    double worthRight=right.getPrice()*1.0/right.getWeight();
    if (worthLeft>worthRight)
    {
        return true;
    }
    else
        return false;
}
bool operator<(const Product& left, const Product& right)
{
    double worthLeft=left.getPrice()*1.0/left.getWeight();
    double worthRight=right.getPrice()*1.0/right.getWeight();
    if (worthLeft<worthRight)
    {
        return true;
    }
    else
        return false;
}
bool operator<=(const Product& left, const Product& right)
{
    double worthLeft=left.getPrice()*1.0/left.getWeight();
    double worthRight=right.getPrice()*1.0/right.getWeight();
    if (worthLeft<=worthRight)
    {
        return true;
    }
    else
        return false;
}
bool operator!=(const Product& left, const Product& right)
{
    double worthLeft=left.getPrice()*1.0/left.getWeight();
    double worthRight=right.getPrice()*1.0/right.getWeight();
    if (worthLeft!=worthRight)
    {
        return true;
    }
    else
        return false;
}
std::ostream& operator<< (std::ostream &out, const Product& p)
{
    out<<"Name: "<<p.getName()<<endl<<"Weight: "<<p.getWeight()<<endl<<"Price: "<<p.getPrice()<<endl;
    return out;
}
std::istream& operator>> (std::istream &in, Product& p)
{
    char* tmpName;
    tmpName= new char[100];
    int tmpWeight,tmpPrice;
    in>>tmpName;
    p.setName(tmpName);
    delete[] tmpName;
    in>>tmpWeight;
    p.setWeight(tmpWeight);
    in>>tmpPrice;
    p.setPrice(tmpPrice);
}
