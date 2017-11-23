#include<iostream>
#include<string>

using namespace std;

struct TreeNode
{
	char val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(char x) :val(x),left(nullptr),right(nullptr){}
};

string pre_order;
string mid_order;
void outOFlast(TreeNode *root) {
	if (root->left != nullptr)outOFlast(root->left);
	if (root->right != nullptr)outOFlast(root->right);

	cout << root->val << endl;
}

TreeNode* reConstructBinaryTree(int pre_left,int pre_right, int mid_left, int mid_right) {
	if (pre_left > pre_right || mid_left > mid_right)
		return nullptr;
	TreeNode*root = new TreeNode(pre_order[pre_left]);

	int i;
	for (int j(mid_left); j <= mid_right; j++)
		if (root->val == mid_order[j]) {
			i = j;
			break;

		}

	root->left = reConstructBinaryTree(pre_left + 1, pre_left + i - mid_left, mid_left, i - 1);
	root->right = reConstructBinaryTree(1 + pre_left + i - mid_left, pre_right, i + 1, mid_right);

	return root;
}
int main() {
	pre_order = { 'A','B','D','E','G','C','F','H','I','J' };
	mid_order = { 'D','B','G','E','A','H','F','I','J','C' };

	TreeNode* root = reConstructBinaryTree(0, pre_order.size()-1, 0, mid_order.size()-1);

	return 0;
}