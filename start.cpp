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
		cout << "Error:输入格式错误，请检查并1s后重新你的输入!\n";
		Sleep(1000);
		panduan();
	}
}
void start() {
	system("mode con cols=50 lines=30");
	//system("title 东方锵锵篇"); 标题设置，测试过了无效
	cout << "                    东方锵锵篇\n"
		<< "\n"
		<< "                  [1]Start game\n"
		<< "\n"
		<< "                     [2]About\n"
		<<"\n"
		<< "                    By:WongLeo\n"
		<<"\n"
		<<"                              输入对应数字继续...\n"
		<< "=================================================\n";
	
	panduan();

}
