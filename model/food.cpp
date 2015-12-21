#include "food.h"

Food::Food(const QString& _name,float _price,const QString& _category) : name(_name),price(_price), category(_category) {
}

Food::~Food() {}

QString Food::getName() const {
    return name;
}

float Food::getPrice() const {
    return price;
}

QString Food::getCategory() const {
    return category;
}

void Food::setName(const QString& _name) {
    name = _name;
}

void Food::setPrice(float _price) {
    price = _price;
}

void Food::setCategory(const QString& _category) {
    category = _category;
}

bool Food::operator==(const Food& food) const {
    return name == food.getName() && price == food.getPrice() && category == food.getCategory();
}

bool Food::operator!=(const Food& food) const {
    return !(name == food.getName() && price == food.getPrice() && category == food.getCategory());
}
