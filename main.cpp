#include <iostream>
#include <clocale>

using namespace std;

class node
{
public:
	int value;
	node *next;


	node()
	{
		value = 0;
		next = NULL;
	}

	node(int v)
	{
		value = v;
		next = NULL;
	}





};

class stack
{
 private:
	 int value;
	 node *root{0};

public:
	int get_el()
	{
		if (root)
			return root->value;
		else
			return NULL;
	}
	void pop()
	{
		if(root->next)
		{
			node *buf = root;
			root = root->next;
			delete buf;
		}
		else
		{
			delete root;
			root = NULL;
		}
	}
	void push(int val)
	{
		if(root)
		{
			node *buf = root;
			buf->value = val;
			buf->next = root;
			root = buf;
		}
		else
		{
			root->value = val;
			root->next = NULL;
		}

	}
};


class queue
{
private:
	int value;
	queue *next;
};











int main()
{
	node *nd = new node();
	stack stk;
	stk.push(5);
	stk.push(6);
	stk.pop();
	stk.pop();
	stk.pop();

	

	return 0;
}
