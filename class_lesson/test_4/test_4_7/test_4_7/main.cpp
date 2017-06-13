#include<iostream>
#include<vector>
using namespace std;
char level(int l) {
	switch (l)
	{
	case 0:case 1:case 2: case 3:case 4:case 5:return 'F'; break;
	case 6:return 'D'; break;
	case 7:return 'C'; break;
	case 8:return 'B'; break;
	case 9:return 'A'; break;
	default:return 'X';
	}
}
int main() {
	int input,max(0),min(100),l,k;//l为等级评价,为余数
	double average, sum(0);
	char sign;
	vector<int> grade;
	cout << "请依次输入学生成绩,请输入五个以上的数据，结束输入请输入-1"<<endl;


	while (cin>>input) {
		if (grade.size() < 5) {
			if (input == -1|| input <-1) {
				cout << "输入数据小于五组，或数据不合法请继续输入。"<<endl;
				continue;
			}
		}
		if (input == -1)break;
		grade.push_back(input);
	}

	for (int x = 0; x < (grade.size()-1); x++) {
		sum += grade[x];
		if (grade[x] > max)max = grade[x];
		if (grade[x] < min)min = grade[x];
	}
	average = sum / grade.size();

	cout << "最高分:" << max << "最低分" << min << "平均分" << average << endl;
	for (int x = 0; x <= (grade.size() - 1); x++) {
		if (grade[x] == 100) {
			cout << '[' << grade[x] << ':' << "A++" << ']' << endl;
			continue;
		}

		k = grade[x] % 10;
		l = grade[x] / 10;

		if (grade[x] > 60) {
			switch (k)
			{
			case 0:case 1:case 2:sign = '-'; break;
			case 8:case 9:sign = '+'; break;
			}
		}
		else sign = ' ';
			cout << '[' << grade[x] << ':' << level(l) << sign << ']' << endl;
	}
	return 0;
}