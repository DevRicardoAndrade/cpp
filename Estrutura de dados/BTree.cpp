#include <iostream>

class BTree{
    private:
        int _value;
        BTree* _left;
        BTree* _right;

    public:
        BTree(int value, BTree* left, BTree* right){
        this->_value = value;
        this->_left = left;
        this->_right = right;
    }
        int getValue(){
        return this->_value;
    }
        BTree* getLeft(){
        return this->_left;
    }
        BTree* getRight(){
        return this->_right;
    }

};

int main(int argc, char *argv[])
{
    BTree* node_1 = new BTree(4,nullptr, nullptr);
    BTree* node_2 = new BTree(3,nullptr, nullptr);
    BTree* node_3 = new BTree(2,node_2, node_1); 
    std::cout << node_1->getValue();
    return 0;
}