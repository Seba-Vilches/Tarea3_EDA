#ifndef ITEM_HPP_
#define ITEM_HPP_

#include "trees/treeList.hpp"

using namespace std;

namespace trees {

class Item {
private:
	Item* parent;
    string name;
	int type;
	TreeList* children;
public:
	Item(string val, int tp);
	void setParent(Item* node);
	void setName(string val);
    void setType(int tp);
	void setChildren(TreeList* list);
	Item* getParent();
	string getName();
    int getType();
	TreeList* getChildren();
	virtual ~Item();
};

} /* namespace trees */

#endif /* ITEM_HPP_ */