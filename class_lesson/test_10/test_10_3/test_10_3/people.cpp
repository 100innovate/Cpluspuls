#include"headfile.h"

void people::putInFile() {
	ofstream ofile;
	ofile.open("myfile.txt", ios::app);
	ofile << "����" << m_name <<'/t'<<"�Ա�"<< m_sex << '/t' << "����" << m_age << '/t' <<"���֤" <<m_idcard<<'/t'<<"����"<<m_birthday<<'/t'<<"��ͥסַ��"<<m_homeadress<<endl;
	ofile.close();
}

void putOutFile() {
	ifstream ifile;
	ifile.open("myfile.txt");
	char ch[255];
	do {
		ifile.getline(ch, 255);
		cout << ch << endl;
	} while (ifile.eof() == 0);
	ifile.close();
	system("pause");
}