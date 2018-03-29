#include "myTrie.h"

myTrie::myTrie(string str,int data)
{
	keyAndValue = nullptr;
	root.resize = 26;
}
myTrie::~myTrie()
{
	
}
void myTrie::insertToTree(string insrtStr, int data)
{
	if (keyAndValue != nullptr)
	{
		for (int i = 0; i < insrtStr.length(); ++i)
		{
			if (&(keyAndValue->str[insrtStr[i]]) == nullptr)
			{
				root[insrtStr[i]-'a'] = new trieNode(insrtStr, data);
			}
		}
	}
}
void approxFind(string& str)
{

}