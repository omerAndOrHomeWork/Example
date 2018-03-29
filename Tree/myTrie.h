#include <iostream>
#include <vector>
using namespace std;
class trieNode;

typedef struct keyType {
	string str;
	int data;
} KeyType;
class myTrie
{
public:
	myTrie(string str,int data);
	~myTrie();
	void insertToTree(string insertStr, int data);
	void lowerCase(string str);
	void approxFind(string& str);
private:
	class trieNode
	{
	public:
		trieNode(string str, int data)
		{
		}
		~trieNode();

	private:
		vector<KeyType> treeNodeKey;
	};
	vector<trieNode*> root;
	KeyType* keyAndValue;
};