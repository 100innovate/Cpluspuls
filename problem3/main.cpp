#include<bits\stdc++.h>
using namespace std;

void expr(string& s, int & count1, char* theout, int& count2);

void factor(string& s, int & count1, char* theout, int& count2)
{
	int op = s[count1++];
	if (op == '('){
		expr(s, count1, theout, count2);//���� ֱ�����룩
		count1++;
	}
	else{
		theout[count2++] = op;
	}
}

void expr(string& s, int & count1, char* theout, int& count2){
	bool k = 0;
	factor(s, count1, theout, count2);//�ж��׸��Ƿ�Ϊ��
	while (count1 < s.length()) {
		if (s[count1] == ')') break;//���룩����
		while (s[count1] == '+' || s[count1] == '-') {
			int op = s[count1++];
			factor(s, count1, theout, count2);//�ж���һ���Ƿ�Ϊ��
			while (s[count1] == '*' || s[count1] == '/') {
				int op = s[count1++];
				factor(s, count1, theout, count2);//�ж���һ���Ƿ�Ϊ��
				theout[count2++] = op;
			}
			theout[count2++] = op;
		}
		while (s[count1] == '*' || s[count1] == '/') {
			int op = s[count1++];
			factor(s, count1, theout, count2);//�ж���һ���Ƿ�Ϊ�� 
			theout[count2++] = op;
		}
	}	
}

int main()
{
	string s;
	char theout[256];
	int count1, count2;

	while (cin >> s)
	{
		count1 = count2 = 0;
		expr(s, count1, theout, count2);
		for (int i(0); i < count2; i++)
			cout << theout[i]<< " ";
		cout << endl;
	}

	return 0;
}