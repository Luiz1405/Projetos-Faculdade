#include <iostream>
#include <sstream>

using namespace std;

struct Node {
  char info;  Node *parent;  Node *left, *right;
  Node(char i, Node *l = nullptr, Node *r = nullptr) {
    info = i;  left = l;  right = r;  parent = nullptr;
    if ( left != nullptr ) left->parent = this;
    if ( right != nullptr ) right->parent = this;
    #ifdef DEBUG
    cerr << "+ Node("<< info << ") criado..." << endl;
    #endif
  }
  ~Node() {
    if ( left != nullptr ) delete left;
    if ( right != nullptr ) delete right;
    #ifdef DEBUG
    cerr << "- Node("<< info << ") destruido..." << endl;
    #endif
  }
};

string strNode(Node *Node) {
  stringstream ss;
  if ( Node->left != nullptr ) ss << "  " << Node->info << " -- " << Node->left->info << endl << strNode(Node->left);
  if ( Node->right != nullptr ) ss << "  " << Node->info << " -- " << Node->right->info << endl << strNode(Node->right);
  return ss.str();
}

string strGraphViz(Node *root) {
  stringstream ss; 
  ss << "graph Arvore {" << endl << "  Node [shape=circle]" << endl << strNode(root) << "}" << endl;
  return ss.str();
}

int degree(Node *subtree) { return 0; }
int depth(Node *subtree) { return 0; }
int size(Node *subtree) { return 0; }
int treeDepth(Node *subtree) { return 0; }

int main() {
  Node *b = new Node('B',new Node('D'),new Node('E'));
  Node *f = new Node('F',new Node('H'));
  Node *c = new Node('C',f,new Node('G'));
  Node *root = new Node('A',b,c);
  cout << strGraphViz(root);
  cout << "degree(f): " << degree(f) << endl;
  cout << "depth(f): " << depth(f) << endl;
  cout << "size(root): " << size(root) << endl;
  cout << "treeDepth(root): " << treeDepth(root) << endl;
  delete root;
  return 0;
}
