#pragma once

//�ֱ��� ����ֱ����������������������������ߣ�������
extern double N;
extern int M;
extern double H1;
extern double H2;
extern const double E;
extern  double sumOfE;
extern const char* myFile;

bool initPrinter();
bool printWireframe(double Pointa[2],double Pointb[2]);

//��ӡ��һ��������Ҫ��ʼ�㣬���ȣ��߶�Z������ֱ��N������M��������E E��������Z�й�
bool tiaoWen(double PointA[2], int length, double Z, double N, int M, double E1);
//��ӡ��������Ҫ��㣬���ȣ��߶�Z������ֱ��N������M��������E
bool tiaoWen2(double PointA[2], int length, double Z, double N, int M, double E1);
//��ӡ������
bool waves(double PointA[2],double lengthOflow,double lengthOfhigh,double Z,int M,int numberOfwaves);
