#include "trees/item.hpp"
#include <iostream>


namespace trees {

    Item::Item(string val, int tp): parent(nullptr), name(val), type(tp), children(new TreeList()) {
}

    void Item::setParent(Item* node) {
	    parent = node;
}

void Item::setName(string val) {
		name = val;
}

void Item::setChildren(TreeList* list) {
	children = list;
}

Item* Item::getParent() {
	return parent;
}

string Item::getName(){
	return name;
}

int Item::getType(){
	return type;
}

TreeList* Item::getChildren(){
	return children;
}

Item::~Item() {
	if (children != nullptr){
		delete children;
	}
}

} /* namespace trees */