#include <vector>
#include <string>
#include <iostream>
using namespace std;

// Do not edit the class below except
// for the depthFirstSearch method.
// Feel free to add new properties
// and methods to the class.
class Node {
  public:
    string name;
    vector<Node *> children;

    Node(string str) { name = str; }

    vector<string> depthFirstSearch(vector<string> *array);

    Node *addChild(string name) {
      Node *child = new Node(name);
      children.push_back(child);
      
      return this;
    }
};


vector<string> Node::depthFirstSearch(vector<string> *array) {
  // Write your code here.
  // O(vertex + ed ge) time
  // O(vertex) space

  array->push_back(this->name);
  for(int i = 0; i < this->children.size(); i++) {
    children[i]->depthFirstSearch(array);
  } // for
      
  return *array;
} // depthFirstSearch