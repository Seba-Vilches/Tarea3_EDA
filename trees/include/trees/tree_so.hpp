/*
 * tree.hpp
 *
 *  Created on: Aug 31, 2022
 *      Author: jsaavedr
 */

#ifndef TREE_HPP_
#define TREE_HPP_

#include "trees/item.hpp"


namespace trees {

class Tree {
private:
	Item* root;
public:
	Tree();
	void setRoot(Item* node);
	void insert(Item* node, Item* parent);
	void insert(int child, int parent);
	Item* find_rec(int val, Item* node);
	Item* find(int val);
	void traverse_rec(Item* node, int level);
	void traverse();
	virtual ~Tree();
};

} /* namespace trees */

#endif /* TREE_HPP_ */
