/*1.���Ƶ�ʵ��N*M				
  2.��㣬�յ�
  3.���H1��H2����ż����
  4.����������
  4.�����׶���ʵ�� 
  5.��������İ�͹��
  6.��ǵĴ�ӡ*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include"initGcode.h"

using namespace std;

double sumOfE = 0.0;
double N = 0.4;
int M = 5;
double H1 = 0.1;
double H2 = 0.2;
extern const double E = 0.038;

int main()
{
	initPrinter();
	double aa[2];
	double bb[2];
	//cout << "Please your START and END POINT"<<endl;
	//cin >> aa[0]>> aa[1]>> bb[0]>> bb[1];

	double temp[2] = {50,20};
	tiaoWen(temp,100,0.2,0.4,5,1);
	printWireframe(aa,bb);
}