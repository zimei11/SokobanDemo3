#pragma once
#ifndef Souse_H
#define Souse_H
#include <graphics.h>
const int pl = 48;//С�˳�&&��׼����
int pw = 32;//С�˿�

int i, j;//�ֲ�������

int level = 0;					  //��ǰ����
const int max_level = 40;		  // ������
int maps[25][16] = { 0 }; // �洢��ͼ��Ϣ��0Ϊ�յأ�1Ϊǽ
int step = 0;             // ��ǰʹ�õĲ���
int pre_step;			  // ������һ����״̬
int memory_map[500][25][16];  // ����ǰ�ĵ�ͼ���м�¼
int memory_people[500][3];    // ����ǰ��������м�¼
IMAGE img_human[10], img_walls[10], img_human2[10], img_background[10], img_box, img, img2,img3,img4 ,img_backgroundaim[50], img_boxf, img1, img_grass,img_skin[10];	// ���� IMAGE ����

char input;//��¼���̵�ǰ����״̬

int skinnum2 = 1,skinnum3=1,skinnum4=1;//Ƥ��

void loading()
{
	loadimage(&img_human2[1], L"����2.png", 128, 192);
	loadimage(&img_human[1], L"����.png", 128, 192);
	loadimage(&img_human2[2], L"����b2.png", 128, 192);
	loadimage(&img_human[2], L"����b.png", 128, 192);
	loadimage(&img_human2[3], L"����c2.png", 128, 192);
	loadimage(&img_human[3], L"����c.png", 128, 192);
	loadimage(&img_human2[4], L"����d2.png", 128, 192);
	loadimage(&img_human[4], L"����d.png", 128, 192);
	loadimage(&img_human2[5], L"����e2.png", 128, 192);
	loadimage(&img_human[5], L"����e.png", 128, 192);
	loadimage(&img_walls[1], L"ʯǽ.png", pl, pl);
	loadimage(&img_walls[2], L"ʯǽ2.png", pl, pl);
	loadimage(&img_walls[3], L"ʯǽ3.png", pl, pl);
	loadimage(&img_walls[4], L"ʯǽ4.png", pl, pl);
	loadimage(&img_walls[5], L"ʯǽ5.png", pl, pl);
	loadimage(&img_background[1], L"�ذ�1.png", pl, pl);
	loadimage(&img_background[2], L"�ذ�2.png", pl, pl);
	loadimage(&img_background[3], L"�ذ�3.png", pl, pl);
	loadimage(&img_background[4], L"�ذ�4.png", pl, pl);
	loadimage(&img_background[5], L"�ذ�5.png", pl, pl);
	loadimage(&img_backgroundaim[1], L"�ذ�11.png", pl, pl);
	loadimage(&img_backgroundaim[2], L"�ذ���2.png", pl, pl);
	loadimage(&img_backgroundaim[3], L"�ذ�33.png", pl, pl);
	loadimage(&img_backgroundaim[4], L"�ذ�44.png", pl, pl);
	loadimage(&img_backgroundaim[5], L"�ذ�55.png", pl, pl);
	loadimage(&img_skin[1], L"Ƥ��1.png", pl*4, pl*4);
	loadimage(&img_skin[2], L"Ƥ��2.png", pl * 4, pl * 4);
	loadimage(&img_skin[3], L"Ƥ��3.png", pl * 4, pl * 4);
	loadimage(&img_skin[4], L"Ƥ��4.png", pl * 4, pl * 4);
	loadimage(&img_skin[5], L"Ƥ��5.png", pl * 4, pl * 4);
	loadimage(&img_box, L"����.jpg", pl, pl);
	loadimage(&img_boxf, L"�������.png", pl, pl);
	loadimage(&img, L"�󱳾�.png", 1200, 768);
	loadimage(&img1, L"��ز.jpg", 1200, 768);
	loadimage(&img2, L"�󱳾�2.png", 1200, 768);
	loadimage(&img_grass, L"��.jpg", pl, pl);

}
#endif
