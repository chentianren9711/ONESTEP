// ONE_STEP_PRICE.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<vector>
#include<iostream>
using namespace std;
void inital(double &inputPrice, double &inputWords, double &outputPercent);//初始化所有参数


class project {
public:
	double inputPrice;
	double inputWords;
	double outputPercent;
	int numberOfPages;
	double hours;
	void inputWord();
	void inputTime();
	void test();
	project();
};



void quit() {
	cout << "some error occur, exit now"<<endl;
	exit(1);
}
int main(){
	int i = 0;
	int number = i;
	project outputArray[50];
	cout << "Please input price:\n";
	for (i = 0; i < 50; i++) {
		outputArray[i].inputTime();
		if (outputArray[i].inputPrice < 0 || outputArray[i].inputWords < 0)
			break;


	}

	number = i;
	if (outputArray[0].hours < 0) {
		for (int i = 0; i < number; i++) {
			cout << "pages number: " << outputArray[i].numberOfPages << " price: " << outputArray[i].outputPercent << endl;
		}
	}
	else {
		for (int i = 0; i < number; i++) {
			cout << "days: " << outputArray[i].hours << " price: " << outputArray[i].outputPercent << endl;
		}

	}

	cout << "\nThis is all array number";

	//printArray(outputArray, i);
	//printTest(outputArray, i);



    return 0;
}

void inital(double & inputPrice, double & inputWords, double & outputPercent){
	inputPrice = 0.0;
	inputWords = 0.0;
	outputPercent = 0.0;
}

void printArray(project a[],int number,int z){
	for (int i = 0; i < number; i++) {
		if (i+1>number)
			cout << "  pages number: "<<a[i].numberOfPages << i + 1 << " price: " << a[i].outputPercent << endl;

		else {
			if (a[i].outputPercent<a[i + 1].outputPercent)
				cout << "**pages number: " << a[i].numberOfPages << " price: " << a[i].outputPercent << "**"<< endl;
			else
				cout << "  pages number: " << a[i].numberOfPages << i + 1 << " price: " << a[i].outputPercent << endl;
		}

		
	}
	cout << "\nThis is all array number";
}

void printTest(project a[], int number)
{
	for (int i = 0; i < number; i++) {
		if (i + 1>number)
			cout << "  pages number: " << a[i].numberOfPages << i + 1 << " price: " << a[i].outputPercent << endl;

		else {
			if (a[i].outputPercent<a[i + 1].outputPercent)
				cout << "**pages number: " << a[i].numberOfPages << " price: " << a[i].outputPercent << "**" << endl;
			else
				cout << "  pages number: " << a[i].numberOfPages << i + 1 << " price: " << a[i].outputPercent << endl;
		}


	}
	cout << "\nThis is all array number";
}

void project::inputWord(){
	cin >> inputPrice;
	cin >> inputWords;
	hours = 0;
	numberOfPages = inputWords / 550;
	//cout << "numberOfPages is: " << numberOfPages << endl;
	outputPercent = inputPrice / inputWords;
	if (inputPrice > 0 && inputWords > 0)
		cout << "percent: " << outputPercent << endl;



}

void project::inputTime(){

	cout << "550 words ";
	inputWords = 550;
	cin >> hours;
	cin >> inputPrice;
	numberOfPages = inputWords / 550;
	//cout << "numberOfPages is: " << numberOfPages << endl;
	outputPercent = inputPrice / inputWords;
	if (inputPrice > 0 && inputWords > 0)
		cout << "percent: " << outputPercent << endl<<endl;
}

void project::test()
{
}

project::project(){
	inputPrice = 0.0;
	inputWords = 0.0;
	outputPercent = 0.0;
	numberOfPages = 0;
}

//cout << "percent: " << outputPercent << endl;
//outputArray[i] = outputPercent;








/*else {
	if (outputArray[i].outputPercent<outputArray[i + 1].outputPercent)
		cout << "**pages number: " << outputArray[i].numberOfPages << " price: " << outputArray[i].outputPercent << "**" << endl;
	else
		cout << "  pages number: " << outputArray[i].numberOfPages << i + 1 << " price: " << outputArray[i].outputPercent << endl;
}*/