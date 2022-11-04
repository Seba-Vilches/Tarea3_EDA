#include <iostream>
#include "trees/tree_so.hpp"
#include <cstring>

using namespace trees;

int change_directory(){
	return 0;
}

int list_dir(){
	return 0;
}

int make_dir(){
	return 0;
}

int make_file(){
	return 0;
}

int remove_dir(){
	return 0;
}

int show_tree(){
	return 0;
}

int find(){
	return 0;
}

int exit(){
	return 0;
}

int main(int nargs, char** vargs){
	Tree treeSO;
	treeSO.setRoot(new Item("/",0));
	treeSO.traverse();
	return 0;
}
