#include"hash_table.h"
#include<iostream>
#include<string>
#include<memory>

#define MAX_SIZE 13

using namespace std;

int main() {
	hash_table<string, shared_ptr<telephoneData>>teleponeTable(MAX_SIZE, MAX_SIZE);
	hash_table<string, shared_ptr<telephoneData>>nameTable(MAX_SIZE, MAX_SIZE);
	while (1) {
		cout << "**************************" << endl;
		cout << "*******欢迎进入系统*******" << endl;
		cout << "**************************" << endl;
		cout << "**********1.插入**********" << endl;
		cout << "**********2.查找**********" << endl;
		cout << "**********3.删除**********" << endl;
		cout << "**************************" << endl;
		int a;
		cin >> a;
		if (a == 1) {
			cout << "请输入姓名:" << endl;
			string name;
			cin >> name;
			cout << "请输入电话:" << endl;
			string telephone;
			cin >> telephone;
			cout << "请输入地址:" << endl;
			string adress;
			cin >> adress;
			shared_ptr<telephoneData> p(new telephoneData());
			p->name = name;
			p->adress = adress;
			p->telephoneNumber = telephone;
			if(teleponeTable.Insert(telephone,p))
				nameTable.InsertIn(name,p);
		}
		if (a == 2) {
			cout << "**********请输入号码电话**********" << endl;
			cout << "请输入要查找的电话:" << endl;
			string kk;
			cin >> kk;
			auto pp = teleponeTable.Search(kk);
			cout << pp->name <<" "<< pp->telephoneNumber << " " << pp->adress << " " << endl;
		}
	}
}