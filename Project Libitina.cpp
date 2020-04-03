// Project Libitina.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//Doki Doki Literature Club

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
//#include <bits/stdc++.h>
#include <conio.h>
#include <WinBase.h>
#include <Mmsystem.h>
#pragma comment(lib, "winmm.lib")

using namespace std;
bool run = 0, chos1 = 0;
short qp = 1, chos1p1 = 1;
short start() {
	cout << "Do you want to start this game? (Y/N)";
	string a;
	cin>>a;
	if (a == "Y" || a == "y") {
		run = 1;
		return 1;
	}
	else if (a == "N" || a == "n") {
		run = 0;
		return 1;
	}
	qp++;
	if (qp > 10) {
		run = 0;
		return 1;
	}
	system("cls");
	cout << "Input error.Please input again.\n";
	return 0;
}

short cho1() {
	cout << "Do you believe in something? (Y/N)";
	string a;
	cin >> a;
	if (a == "Y" || a == "y") {
		chos1 = 1;
		return 1;
	}
	else if (a == "N" || a == "n") {
		chos1 = 0;
		return 1;
	}
	chos1p1++;
	if (chos1p1 > 10) {
		chos1 = 0;
		return 1;
	}
	system("cls");
	cout << "Input error.Please input again.\n";
	return 0;
}

void quit() {
	cout << "Thanks for playing this game.\nPress any key to quit.";
	fflush(stdin);
	_getch();
}

/*void qt1() {
	while (1) {
		if (_kbhit()) break;
	}
}*/

short cyb() {
	short b = 0;
	a1:
	b++;
	system("cls");
	cout << "Please choose one thing that you believe in:\n1.Universal Value\n2.Science\n3.Religion\n";
	char a;
	cin >> a;
	switch (a) {
	case '1':
		return 1;
	case '2':
		return 2;
	case '3':
		return 3;
	}
	system("cls");
	cout << "Input error.Please input again.\n";
	if (!(b == 10))goto a1;
	return 0;
}

void uv(){
	system("cls");
	cout << "Stephen: ";
	for (int i = 1; i <= 3; i++) {
		Sleep(1000);
		cout << '.';
	}
	printf("%s", "\nStephen: ");
	string qaa = "So are you virual?";
	int i = 0;
	while (1) {
		cout << qaa[i];
		i++;
		Sleep(30);
		if (qaa[i - 1] == '?') break;
	}
	i = 0;
	Sleep(200);
	fflush(stdin);
	_getch();
	printf("%s", "\nMonika: ");
	qaa="Of course not. You know that, right?";
	while (1) {
		cout << qaa[i];
		i++;
		Sleep(30);
		if (qaa[i - 1] == '.') Sleep(500);
		if (qaa[i - 1] == ',') Sleep(200);
		if (qaa[i - 1] == '?') break;
	}
	i = 0;
	Sleep(200);
	fflush(stdin);
	_getch();
	printf("%s", "\nStephen: ");
	qaa = "I'm sorry that I may cannot feel it. I can only feel peace feeling when I first see you in the room. ";
	int point=0;
	while (1) {
		cout << qaa[i];
		i++;
		Sleep(30);
		if (qaa[i - 1] == '.') {
			Sleep(500); point++;
		}
		if (qaa[i - 1] == ',') Sleep(200);
		if (qaa[i - 1] == '?') break;
		if (point == 2)break;
	}
	i = 0;
	Sleep(200);
	fflush(stdin);
	_getch();
	printf("%s", "\nStephen: ");
	qaa = "How can I know you are real?";
	point = 0;
	while (1) {
		cout << qaa[i];
		i++;
		Sleep(30);
		if (qaa[i - 1] == '.') {
			Sleep(500); point++;
		}
		if (qaa[i - 1] == ',') Sleep(200);
		if (qaa[i - 1] == '?') break;
		if (point == 2)break;
	}
	i = 0;
	Sleep(200);
	fflush(stdin);
	_getch();
	printf("%s", "\nMonika: ");
	qaa = "I love you and I'm feeling my love for you all the time!!! What do you want more?";
	point = 0;
	while (1) {
		cout << qaa[i];
		i++;
		Sleep(30);
		if (qaa[i - 1] == '.') {
			Sleep(500); point++;
		}
		if (qaa[i - 1] == ',') Sleep(200);
		if (qaa[i - 1] == '?') break;
		if (qaa[i - 1] == '!') Sleep(400);
		if (point == 2)break;
	}
	i = 0;
	Sleep(200);
	fflush(stdin);
	_getch();
	printf("%s", "\nStephen: ");
	qaa = "Sorry, I even cannot prove that I exist.";
	point = 0;
	while (1) {
		cout << qaa[i];
		i++;
		Sleep(30);
		if (qaa[i - 1] == '.') {
			Sleep(500); point++;
		}
		if (qaa[i - 1] == ',') Sleep(200);
		if (qaa[i - 1] == '?') break;
		if (qaa[i - 1] == '!') Sleep(400);
		if (point == 1)break;
	}
	cout << endl;
	quit();
}

void sci(){}

void eva(){}

int main()
{
	system("color E0");
	PlaySound(TEXT("松本文紀 - 夜の向日葵.wav"), NULL, SND_LOOP|SND_ASYNC);
	cout << "Hello World!\n";
	while (!start());
	if (run == 0) return 0;
	system("cls");
	while (!cho1());
	if (chos1 == 0) {
		quit(); return 0;
	}
	switch (cyb()) {
	case 1:goto cyb1;
	case 2:goto cyb2;
	case 3:goto cyb3;
	}
	quit();
cyb1:uv(); goto qt;
cyb2:sci(); goto qt;
cyb3:eva(); goto qt;
	qt:
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件