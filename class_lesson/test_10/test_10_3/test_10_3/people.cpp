#include"headfile.h"

void people::putInFile() {
	ofstream ofile;
	ofile.open("myfile.txt", ios::app);
	ofile << "姓名" << m_name <<'/t'<<"性别"<< m_sex << '/t' << "年龄" << m_age << '/t' <<"身份证" <<m_idcard<<'/t'<<"生日"<<m_birthday<<'/t'<<"家庭住址："<<m_homeadress<<endl;
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