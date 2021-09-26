#pragma once
#ifndef Souse_H
#define Souse_H
#include <graphics.h>
const int pl = 48;//小人长&&标准长度
int pw = 32;//小人宽

int i, j;//局部计数用

int level = 0;					  //当前关数
const int max_level = 40;		  // 最大关数
int maps[25][16] = { 0 }; // 存储地图信息，0为空地，1为墙
int step = 0;             // 当前使用的步数
int pre_step;			  // 定义上一步的状态
int memory_map[500][25][16];  // 对先前的地图进行记录
int memory_people[500][3];    // 对先前的人物进行记录
IMAGE img_human[10], img_walls[10], img_human2[10], img_background[10], img_box, img, img2,img3,img4 ,img_backgroundaim[50], img_boxf, img1, img_grass,img_skin[10];	// 定义 IMAGE 对象

char input;//记录键盘当前输入状态

int skinnum2 = 1,skinnum3=1,skinnum4=1;//皮肤

void loading()
{
	loadimage(&img_human2[1], L"人物2.png", 128, 192);
	loadimage(&img_human[1], L"人物.png", 128, 192);
	loadimage(&img_human2[2], L"人物b2.png", 128, 192);
	loadimage(&img_human[2], L"人物b.png", 128, 192);
	loadimage(&img_human2[3], L"人物c2.png", 128, 192);
	loadimage(&img_human[3], L"人物c.png", 128, 192);
	loadimage(&img_human2[4], L"人物d2.png", 128, 192);
	loadimage(&img_human[4], L"人物d.png", 128, 192);
	loadimage(&img_human2[5], L"人物e2.png", 128, 192);
	loadimage(&img_human[5], L"人物e.png", 128, 192);
	loadimage(&img_walls[1], L"石墙.png", pl, pl);
	loadimage(&img_walls[2], L"石墙2.png", pl, pl);
	loadimage(&img_walls[3], L"石墙3.png", pl, pl);
	loadimage(&img_walls[4], L"石墙4.png", pl, pl);
	loadimage(&img_walls[5], L"石墙5.png", pl, pl);
	loadimage(&img_background[1], L"地板1.png", pl, pl);
	loadimage(&img_background[2], L"地板2.png", pl, pl);
	loadimage(&img_background[3], L"地板3.png", pl, pl);
	loadimage(&img_background[4], L"地板4.png", pl, pl);
	loadimage(&img_background[5], L"地板5.png", pl, pl);
	loadimage(&img_backgroundaim[1], L"地板11.png", pl, pl);
	loadimage(&img_backgroundaim[2], L"地板光标2.png", pl, pl);
	loadimage(&img_backgroundaim[3], L"地板33.png", pl, pl);
	loadimage(&img_backgroundaim[4], L"地板44.png", pl, pl);
	loadimage(&img_backgroundaim[5], L"地板55.png", pl, pl);
	loadimage(&img_skin[1], L"皮肤1.png", pl*4, pl*4);
	loadimage(&img_skin[2], L"皮肤2.png", pl * 4, pl * 4);
	loadimage(&img_skin[3], L"皮肤3.png", pl * 4, pl * 4);
	loadimage(&img_skin[4], L"皮肤4.png", pl * 4, pl * 4);
	loadimage(&img_skin[5], L"皮肤5.png", pl * 4, pl * 4);
	loadimage(&img_box, L"箱子.jpg", pl, pl);
	loadimage(&img_boxf, L"箱子完成.png", pl, pl);
	loadimage(&img, L"大背景.png", 1200, 768);
	loadimage(&img1, L"桃夭.jpg", 1200, 768);
	loadimage(&img2, L"大背景2.png", 1200, 768);
	loadimage(&img_grass, L"草.jpg", pl, pl);

}
#endif
