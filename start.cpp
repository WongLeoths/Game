#include<iostream>
#include<Windows.h>
using namespace std;
extern char shuruneirong = ' ';
//void shuru();
void about();
void gs();
void panduan() {
	//shuru();
	cin >> shuruneirong;
	if (shuruneirong == '1' || shuruneirong == '2') {
		if (shuruneirong == '1') {
			gs();
		}
		if (shuruneirong == '2') {
			about();
		}

	}
	else {
		cout << "Error:�����ʽ�������鲢1s�������������!\n";
		Sleep(1000);
		panduan();
	}
}
void start() {
	system("mode con cols=50 lines=30");
	//system("title ��������ƪ"); �������ã����Թ�����Ч
	cout << "                    ��������ƪ\n"
		<< "\n"
		<< "                  [1]Start game\n"
		<< "\n"
		<< "                     [2]About\n"
		<<"\n"
		<< "                    By:WongLeo\n"
		<<"\n"
		<<"                              �����Ӧ���ּ���...\n"
		<< "=================================================\n";
	
	panduan();

}
