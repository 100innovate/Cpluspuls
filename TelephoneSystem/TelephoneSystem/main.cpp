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
		cout << "*******��ӭ����ϵͳ*******" << endl;
		cout << "**************************" << endl;
		cout << "**********1.����**********" << endl;
		cout << "**********2.����**********" << endl;
		cout << "**********3.ɾ��**********" << endl;
		cout << "**************************" << endl;
		int a;
		cin >> a;
		if (a == 1) {
			cout << "����������:" << endl;
			string name;
			cin >> name;
			cout << "������绰:" << endl;
			string telephone;
			cin >> telephone;
			cout << "�������ַ:" << endl;
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
			cout << "**********���������绰**********" << endl;
			cout << "������Ҫ���ҵĵ绰:" << endl;
			string kk;
			cin >> kk;
			auto pp = teleponeTable.Search(kk);
			cout << pp->name <<" "<< pp->telephoneNumber << " " << pp->adress << " " << endl;
		}
	}
}