#include<iostream>
using namespace std;
//�����������ۼӴ���
int number(int month) {
	switch (month) {//�����������ۼӴ���
	case 2:return 31; break;
	case 3:return 59; break;
	case 4:return 90; break;
	case 5:return 120; break;
	case 6:return 151; break;
	case 7:return 181; break;
	case 8:return 212; break;
	case 9:return 243; break;
	case 10:return 273; break;
	case 11:return 304; break;
	case 12:return 334; break;
	case 1:return 0; break;
	}
}


bool xyz(int year){
	if (year / 4 == 0 && (year / 100 != 0 || year / 400 == 0)) {
		return 1;
	}
	else return 0;
}


int main() {
	int year, month, day, sum;
	cout << "����������������:";

	//�ж�����Ϸ�
	while (cin >> year >> month >> day) {
		if(month<=12){
			if (day <= 28)break;//�κ�ʱ��С��28���Ϸ�
			if (xyz(year) == 1&& month == 2) {
				if (day <= 29)break;
			}
			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10||month == 12 ) {
				if (day <= 31)break;
			}
			if (month == 4 || month == 6 || month == 9 || month == 11 ) {
				if(day<=30)break;
			}
		}
		cout << "���벻�Ϸ�����������"<<endl;
	}

	//����
	if (xyz(year == 0)||month<=2) {
		sum = number(month) + day;
	}
	else sum = number(month) + 1 + day;

	//���
	cout << "��һ������һ��ĵ�" << sum << "��" << endl;
	return 0;
}