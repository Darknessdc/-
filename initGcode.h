#pragma once

//�ֱ��� ����ֱ����������������������������ߣ�������
extern double N;
extern int M;
extern double H1;
extern double H2;
extern const double E;
extern  double sumOfE;

bool initPrinter();
bool printWireframe(double Pointa[2],double Pointb[2]);
//��ӡ��һ������Ҫ��ʼ�㣬�߶�Z������ֱ��N������M��������E E��������Z�й�
bool tiaoWen(double PointA[2], int length, double Z, double N, int M, double E1);
