#include<conio.h>
#include<Windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")
#include <time.h>
#include"People_Map.h"
  

void printmenu(RECT r, const int b1, const int b11, const int b2, const int b22, const int b3, const int b33);
//ѡ��Ƥ��
int chooseskin()
{
	//loadimage(&img4, L"ѡƤ��.png", 1200, 768);
	//putimage(0, 0, &img4);
	int xx = pl * 4.8;
	const int b1 = 6, b11 = 7;//��ť
	const int b2 = 8, b22 = 9;
	const int b3 = 10, b33 = 11;
	ExMessage k;
	int lx = pl, ly = pl * 5, ry = pl * 5 + pl * 4, rx = pl + pl * 4;
	putimage(lx, ly, &img_skin[1]);
	putimage(lx + xx, ly, &img_skin[2]);
	putimage(lx + xx * 2, ly, &img_skin[3]);
	putimage(lx + xx * 3, ly, &img_skin[4]);
	putimage(lx + xx * 4, ly, &img_skin[5]);
	FlushBatchDraw();
	while (true)
	{
		
		k = getmessage(EM_MOUSE | EM_KEY);
	


		if (k.x >= lx + xx * 0 && k.x <= rx + xx* 0 && k.y >= ly && k.y <= ry  && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + xx * 0), (ly ), (rx + xx * 0), (ry));
			rectangle((lx - 6 + xx * 0), (ly-6), (rx + 6 + xx * 0), (ry+6));
			floodfill((lx - 6 + 1 + xx * 0), (ly - 5), RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			Sleep(300);
			return 1;
		}
		if (k.x >= lx + xx * 1 && k.x <= rx + xx * 1 && k.y >= ly && k.y <= ry && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + xx * 1), (ly), (rx + xx * 1), (ry));
			rectangle((lx - 6 + xx * 1), (ly - 6), (rx + 6 + xx * 1), (ry + 6));
			floodfill((lx - 6 + 1 + xx * 1), (ly - 5), RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 0;
			Sleep(300);
			return 2;
		}
		if (k.x >= lx + xx * 2 && k.x <= rx + xx * 2 && k.y >= ly && k.y <= ry && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + xx * 2), (ly), (rx + xx * 2), (ry));
			rectangle((lx - 6 + xx * 2), (ly - 6), (rx + 6 + xx * 2), (ry + 6));
			floodfill((lx - 6 + 1 + xx * 2), (ly - 5), RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 0;
			Sleep(300);
			return 3;
		}
		if (k.x >= lx + xx * 3 && k.x <= rx + xx * 3 && k.y >= ly && k.y <= ry && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + xx * 3), (ly), (rx + xx * 3), (ry));
			rectangle((lx - 6 + xx * 3), (ly - 6), (rx + 6 + xx * 3), (ry + 6));
			floodfill((lx - 6 + 1 + xx * 3), (ly - 5), RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 0;
			Sleep(300);
			return 4;
		}
		if (k.x >= lx + xx * 4 && k.x <= rx + xx * 4 && k.y >= ly && k.y <= ry && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + xx * 4), (ly), (rx + xx * 4), (ry));
			rectangle((lx - 6 + xx * 4), (ly - 6), (rx + 6 + xx * 4), (ry + 6));
			floodfill((lx - 6 + 1 + xx * 4), (ly - 5), RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 0;
			Sleep(300);
			return 5;
		}
		//if (k.x > pl * 11 && k.x<pl * 14 && k.y>pl * b3 && k.y < pl * b33 && k.message == WM_LBUTTONDOWN)
		//{
		//	RECT r = { 0, 0, pl * 25,pl * 8 };
		//	
		//	//����b3
		//	setfillcolor(RGB(115, 74, 18));
		//	fillrectangle(pl * 11, pl * b3, pl * 14, pl * b33);
		//	r = { pl * 11, pl * b3, pl * 14, pl * b33 };
		//	settextcolor(BLACK);
		//	drawtext(_T("���ز˵�"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
		//	FlushBatchDraw();
		//	Sleep(200);


		//	/************��ʼ**********/
		//	cleardevice();
		//	putimage(0, 0, &img2);//��ӡ��ʼ������
		//	setfillcolor(BROWN);
		//	printmenu(r, b1, b11, b2, b22, b3, b33);
		//	break;
		//}
		else
		{
			setbkmode(TRANSPARENT);
			//putimage(0, 0, &img2);
			FlushBatchDraw();
		}
	}
	return 0;
}

//�ؿ�
void interfacial()
{
	loadimage(&img3, L"�ؿ�1.png", 1200, 768);
	putimage(0, 0, &img3);
	int lx = 48, ly = 147, rx = 144, ry = 243;
	ExMessage k;

	BeginBatchDraw();
	while (true)
	{
		k = getmessage(EM_MOUSE | EM_KEY);
		if (k.x >= lx + 144 * 0 && k.x <= rx + 144 * 0 && k.y >= ly + 120 * 0 && k.y <= ry + 120 * 0 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 0), (ly + 120 * 0), (rx + 144 * 0), (ry + 120 * 0));
			rectangle((lx - 6 + 144 * 0), (ly - 6), (rx + 6 + 144 * 0), (ry + 6));
			floodfill((lx - 6 + 1 + 144 * 0), (ly - 5), RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 0;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 1 && k.x <= rx + 144 * 1 && k.y >= ly + 120 * 0 && k.y <= ry + 120 * 0 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 1), (ly), (rx + 144 * 1), (ry));
			rectangle((lx - 6 + 144 * 1), (ly - 6), (rx + 6 + 144 * 1), (ry + 6));
			floodfill((lx - 6 + 1 + 144 * 1), (ly - 5), RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 1;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 2 && k.x <= rx + 144 * 2 && k.y >= ly + 120 * 0 && k.y <= ry + 120 * 0 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 2), (ly), (rx + 144 * 2), (ry));
			rectangle((lx - 6 + 144 * 2), (ly - 6), (rx + 6 + 144 * 2), (ry + 6));
			floodfill((lx - 6 + 1 + 144 * 2), (ly - 5), RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 2;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 3 && k.x <= rx + 144 * 3 && k.y >= ly + 120 * 0 && k.y <= ry + 120 * 0 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 3), (ly), (rx + 144 * 3), (ry));
			rectangle((lx - 6 + 144 * 3), (ly - 6), (rx + 6 + 144 * 3), (ry + 6));
			floodfill((lx - 6 + 1 + 144 * 3), (ly - 5), RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 3;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 4 && k.x <= rx + 144 * 4 && k.y >= ly + 120 * 0 && k.y <= ry + 120 * 0 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 4), (ly), (rx + 144 * 4), (ry));
			rectangle((lx - 6 + 144 * 4), (ly - 6), (rx + 6 + 144 * 4), (ry + 6));
			floodfill((lx - 6 + 1 + 144 * 4), (ly - 5), RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 4;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 5 && k.x <= rx + 144 * 5 && k.y >= ly + 120 * 0 && k.y <= ry + 120 * 0 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 5), (ly), (rx + 144 * 5), (ry));
			rectangle((lx - 6 + 144 * 5), (ly - 6), (rx + 6 + 144 * 5), (ry + 6));
			floodfill((lx - 6 + 1 + 144 * 5), (ly - 5), RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 5;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 6 && k.x <= rx + 144 * 6 && k.y >= ly + 120 * 0 && k.y <= ry + 120 * 0 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 6), (ly), (rx + 144 * 6), (ry));
			rectangle((lx - 6 + 144 * 6), (ly - 6), (rx + 6 + 144 * 6), (ry + 6));
			floodfill((lx - 6 + 1 + 144 * 6), (ly - 5), RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 6;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 7 && k.x <= rx + 144 * 7 && k.y >= ly + 120 * 0 && k.y <= ry + 120 * 0 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 7), (ly), (rx + 144 * 7), (ry));
			rectangle((lx - 6 + 144 * 7), (ly - 6), (rx + 6 + 144 * 7), (ry + 6));
			floodfill((lx - 6 + 1 + 144 * 7), (ly - 5), RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 7;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 0 && k.x <= rx + 144 * 0 && k.y >= 266 && k.y <= 362 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 0), 266, (rx + 144 * 0), 362);
			rectangle((lx - 6 + 144 * 0), 260, (rx + 6 + 144 * 0), 368);
			floodfill((lx - 6 + 1 + 144 * 0), 261, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 8;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 1 && k.x <= rx + 144 * 1 && k.y >= 266 && k.y <= 362 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 1), 266, (rx + 144 * 1), 362);
			rectangle((lx - 6 + 144 * 1), 260, (rx + 6 + 144 * 1), 368);
			floodfill((lx - 6 + 1 + 144 * 1), 261, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 9;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 2 && k.x <= rx + 144 * 2 && k.y >= 266 && k.y <= 362 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 2), 266, (rx + 144 * 2), 362);
			rectangle((lx - 6 + 144 * 2), 260, (rx + 6 + 144 * 2), 368);
			floodfill((lx - 6 + 1 + 144 * 2), 261, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 10;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 3 && k.x <= rx + 144 * 3 && k.y >= 266 && k.y <= 362 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 3), 266, (rx + 144 * 3), 362);
			rectangle((lx - 6 + 144 * 3), 260, (rx + 6 + 144 * 3), 368);
			floodfill((lx - 6 + 1 + 144 * 3), 261, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 11;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 4 && k.x <= rx + 144 * 4 && k.y >= 266 && k.y <= 362 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 4), 266, (rx + 144 * 4), 362);
			rectangle((lx - 6 + 144 * 4), 260, (rx + 6 + 144 * 4), 368);
			floodfill((lx - 6 + 1 + 144 * 4), 261, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 12;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 5 && k.x <= rx + 144 * 5 && k.y >= 266 && k.y <= 362 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 5), 266, (rx + 144 * 5), 362);
			rectangle((lx - 6 + 144 * 5), 260, (rx + 6 + 144 * 5), 368);
			floodfill((lx - 6 + 1 + 144 * 5), 261, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 13;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 6 && k.x <= rx + 144 * 6 && k.y >= 266 && k.y <= 362 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 6), 266, (rx + 144 * 6), 362);
			rectangle((lx - 6 + 144 * 6), 260, (rx + 6 + 144 * 6), 368);
			floodfill((lx - 6 + 1 + 144 * 6), 261, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 14;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 7 && k.x <= rx + 144 * 7 && k.y >= 266 && k.y <= 362 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 7), 266, (rx + 144 * 7), 362);
			rectangle((lx - 6 + 144 * 7), 260, (rx + 6 + 144 * 7), 368);
			floodfill((lx - 6 + 1 + 144 * 7), 261, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 15;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 0 && k.x <= rx + 144 * 0 && k.y >= 385 && k.y <= 481 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 0), 385, (rx + 144 * 0), 481);
			rectangle((lx - 6 + 144 * 0), 379, (rx + 6 + 144 * 0), 487);
			floodfill((lx - 6 + 1 + 144 * 0), 380, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 16;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 1 && k.x <= rx + 144 * 1 && k.y >= 385 && k.y <= 481 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 1), 385, (rx + 144 * 1), 481);
			rectangle((lx - 6 + 144 * 1), 379, (rx + 6 + 144 * 1), 487);
			floodfill((lx - 6 + 1 + 144 * 1), 380, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 17;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 2 && k.x <= rx + 144 * 2 && k.y >= 385 && k.y <= 481 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 2), 385, (rx + 144 * 2), 481);
			rectangle((lx - 6 + 144 * 2), 379, (rx + 6 + 144 * 2), 487);
			floodfill((lx - 6 + 1 + 144 * 2), 380, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 18;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 3 && k.x <= rx + 144 * 3 && k.y >= 385 && k.y <= 481 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 3), 385, (rx + 144 * 3), 481);
			rectangle((lx - 6 + 144 * 3), 379, (rx + 6 + 144 * 3), 487);
			floodfill((lx - 6 + 1 + 144 * 3), 380, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 19;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 4 && k.x <= rx + 144 * 4 && k.y >= 385 && k.y <= 481 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 4), 385, (rx + 144 * 4), 481);
			rectangle((lx - 6 + 144 * 4), 379, (rx + 6 + 144 * 4), 487);
			floodfill((lx - 6 + 1 + 144 * 4), 380, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 20;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 5 && k.x <= rx + 144 * 5 && k.y >= 385 && k.y <= 481 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 5), 385, (rx + 144 * 5), 481);
			rectangle((lx - 6 + 144 * 5), 379, (rx + 6 + 144 * 5), 487);
			floodfill((lx - 6 + 1 + 144 * 5), 380, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 21;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 6 && k.x <= rx + 144 * 6 && k.y >= 385 && k.y <= 481 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 6), 385, (rx + 144 * 6), 481);
			rectangle((lx - 6 + 144 * 6), 379, (rx + 6 + 144 * 6), 487);
			floodfill((lx - 6 + 1 + 144 * 6), 380, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 22;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 7 && k.x <= rx + 144 * 7 && k.y >= 385 && k.y <= 481 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 7), 385, (rx + 144 * 7), 481);
			rectangle((lx - 6 + 144 * 7), 379, (rx + 6 + 144 * 7), 487);
			floodfill((lx - 6 + 1 + 144 * 7), 380, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 23;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 0 && k.x <= rx + 144 * 0 && k.y >= 505 && k.y <= 601 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 0), 505, (rx + 144 * 0), 601);
			rectangle((lx - 6 + 144 * 0), 499, (rx + 6 + 144 * 0), 607);
			floodfill((lx - 6 + 1 + 144 * 0), 500, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 24;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 1 && k.x <= rx + 144 * 1 && k.y >= 505 && k.y <= 601 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 1), 505, (rx + 144 * 1), 601);
			rectangle((lx - 6 + 144 * 1), 499, (rx + 6 + 144 * 1), 607);
			floodfill((lx - 6 + 1 + 144 * 1), 500, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 25;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 2 && k.x <= rx + 144 * 2 && k.y >= 505 && k.y <= 601 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 2), 505, (rx + 144 * 2), 601);
			rectangle((lx - 6 + 144 * 2), 499, (rx + 6 + 144 * 2), 607);
			floodfill((lx - 6 + 1 + 144 * 2), 500, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 26;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 3 && k.x <= rx + 144 * 3 && k.y >= 505 && k.y <= 601 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 3), 505, (rx + 144 * 3), 601);
			rectangle((lx - 6 + 144 * 3), 499, (rx + 6 + 144 * 3), 607);
			floodfill((lx - 6 + 1 + 144 * 3), 500, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 27;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 4 && k.x <= rx + 144 * 4 && k.y >= 505 && k.y <= 601 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 4), 505, (rx + 144 * 4), 601);
			rectangle((lx - 6 + 144 * 4), 499, (rx + 6 + 144 * 4), 607);
			floodfill((lx - 6 + 1 + 144 * 4), 500, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 28;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 5 && k.x <= rx + 144 * 5 && k.y >= 505 && k.y <= 601 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 5), 505, (rx + 144 * 5), 601);
			rectangle((lx - 6 + 144 * 5), 499, (rx + 6 + 144 * 5), 607);
			floodfill((lx - 6 + 1 + 144 * 5), 500, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 29;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 6 && k.x <= rx + 144 * 6 && k.y >= 505 && k.y <= 601 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 6), 505, (rx + 144 * 6), 601);
			rectangle((lx - 6 + 144 * 6), 499, (rx + 6 + 144 * 6), 607);
			floodfill((lx - 6 + 1 + 144 * 6), 500, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 30;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 7 && k.x <= rx + 144 * 7 && k.y >= 505 && k.y <= 601 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 7), 505, (rx + 144 * 7), 601);
			rectangle((lx - 6 + 144 * 7), 499, (rx + 6 + 144 * 7), 607);
			floodfill((lx - 6 + 1 + 144 * 7), 500, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 31;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 0 && k.x <= rx + 144 * 0 && k.y >= 624 && k.y <= 720 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 0), 624, (rx + 144 * 0), 720);
			rectangle((lx - 6 + 144 * 0), 618, (rx + 6 + 144 * 0), 726);
			floodfill((lx - 6 + 1 + 144 * 0), 619, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 32;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 1 && k.x <= rx + 144 * 1 && k.y >= 624 && k.y <= 720 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 1), 624, (rx + 144 * 1), 720);
			rectangle((lx - 6 + 144 * 1), 618, (rx + 6 + 144 * 1), 726);
			floodfill((lx - 6 + 1 + 144 * 1), 619, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 33;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 2 && k.x <= rx + 144 * 2 && k.y >= 624 && k.y <= 720 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 2), 624, (rx + 144 * 2), 720);
			rectangle((lx - 6 + 144 * 2), 618, (rx + 6 + 144 * 2), 726);
			floodfill((lx - 6 + 1 + 144 * 2), 619, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 34;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 3 && k.x <= rx + 144 * 3 && k.y >= 624 && k.y <= 720 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 3), 624, (rx + 144 * 3), 720);
			rectangle((lx - 6 + 144 * 3), 618, (rx + 6 + 144 * 3), 726);
			floodfill((lx - 6 + 1 + 144 * 3), 619, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 35;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 4 && k.x <= rx + 144 * 4 && k.y >= 624 && k.y <= 720 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 4), 624, (rx + 144 * 4), 720);
			rectangle((lx - 6 + 144 * 4), 618, (rx + 6 + 144 * 4), 726);
			floodfill((lx - 6 + 1 + 144 * 4), 619, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 36;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 5 && k.x <= rx + 144 * 5 && k.y >= 624 && k.y <= 720 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 5), 624, (rx + 144 * 5), 720);
			rectangle((lx - 6 + 144 * 5), 618, (rx + 6 + 144 * 5), 726);
			floodfill((lx - 6 + 1 + 144 * 5), 619, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 37;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 6 && k.x <= rx + 144 * 6 && k.y >= 624 && k.y <= 720 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 6), 624, (rx + 144 * 6), 720);
			rectangle((lx - 6 + 144 * 6), 618, (rx + 6 + 144 * 6), 726);
			floodfill((lx - 6 + 1 + 144 * 6), 619, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 38;
			Sleep(300);
			break;
		}
		else if (k.x >= lx + 144 * 7 && k.x <= rx + 144 * 7 && k.y >= 624 && k.y <= 720 && k.message == WM_LBUTTONDOWN)
		{
			setfillcolor(RGB(233, 196, 212));
			setlinecolor(RGB(233, 196, 212));
			rectangle((lx + 144 * 7), 624, (rx + 144 * 7), 720);
			rectangle((lx - 6 + 144 * 7), 618, (rx + 6 + 144 * 7), 726);
			floodfill((lx - 6 + 1 + 144 * 7), 619, RGB(233, 196, 212), FLOODFILLBORDER);
			FlushBatchDraw();
			level = 39;
			Sleep(300);
			break;
		}

		else
		{
			setbkmode(TRANSPARENT);
			//loadimage(&img3, L"�ؿ�1.png", 1200, 768);
			putimage(0, 0, &img3);
			//fillrectangle(200, 450, 500, 400);
			//outtextxy(330, 420, _T("0.�˳�"));
			FlushBatchDraw();
		}

	}
	//system("pause");
}

//��ӡ��ʼ����ͼ
void showbk()
{
	for (i = 0; i < 25; i++)
		for (j = 0; j < 16; j++)
		{
			if (maps[i][j] == 0)//�ذ�
				putimage(i * pl, j * pl, &img_background[skinnum2]);
			if (maps[i][j] == 1)//ǽ
			{
				putimage(i * pl, j * pl, &img_walls[skinnum3]);
			}
			if (maps[i][j] == 3)//Ŀ�ĵ�
			{
				putimage(i * pl, j * pl, &img_backgroundaim[skinnum4]);
			}
			if (maps[i][j] == 7)//����ǵ�����
			{
				putimage(i * pl, j * pl, &img_boxf);
			}
			if (maps[i][j] == 4)//����
			{
				putimage(i * pl, j * pl, &img_box);
			}
		}
}

void peopleMoveContonSum(People& peo)
{
	if (maps[peo.nmap_x][peo.nmap_y] == 0 || maps[peo.nmap_x][peo.nmap_y] == 3 ||
		maps[peo.nmap_x][peo.nmap_y] == 1 || maps[peo.nmap_x][peo.nmap_y] == 4 && maps[peo.nnmap_x][peo.nnmap_y] == 1 ||
		maps[peo.nmap_x][peo.nmap_y] == 4 && maps[peo.nnmap_x][peo.nnmap_y] == 4 ||
		maps[peo.nmap_x][peo.nmap_y] == 7 && maps[peo.nnmap_x][peo.nnmap_y] == 4 ||
		maps[peo.nmap_x][peo.nmap_y] == 7 && maps[peo.nnmap_x][peo.nnmap_y] == 1 ||
		maps[peo.nmap_x][peo.nmap_y] == 7 && maps[peo.nnmap_x][peo.nnmap_y] == 7 ||
		maps[peo.nmap_x][peo.nmap_y] == 4 && maps[peo.nnmap_x][peo.nnmap_y] == 7)//���Ϊ�յ���Ŀ���
	{
		if (maps[peo.nmap_x][peo.nmap_y] == 0 || maps[peo.nmap_x][peo.nmap_y] == 3)//��һ��
		{
			//��¼�����λ��
			memory_people[step][0] = peo.map_x;
			memory_people[step][1] = peo.map_y;
			//��¼���﷽��
			memory_people[step][2] = peo.movenum;
			//��¼��ͼ����Ϣ
			memcpy(memory_map[step], maps, sizeof(maps));

			peo.peopleMoveConton(1);
			peo.peopleMapMove();
			step++;
		}
		else//ԭ��̤��
		{
			peo.peopleMoveConton(0);
		}
	}
	else if (maps[peo.nmap_x][peo.nmap_y] == 4)
	{
		//��¼�����λ��
		memory_people[step][0] = peo.map_x;
		memory_people[step][1] = peo.map_y;
		//��¼���﷽��
		memory_people[step][2] = peo.movenum;
		//��¼��ͼ����Ϣ
		memcpy(memory_map[step], maps, sizeof(maps));

		peo.peopleBoxConton();
		peo.peopleMapMove();
		step++;
	}
	else if (maps[peo.nmap_x][peo.nmap_y] == 7)
	{
		//��¼�����λ��
		memory_people[step][0] = peo.map_x;
		memory_people[step][1] = peo.map_y;
		//��¼���﷽��
		memory_people[step][2] = peo.movenum;
		//��¼��ͼ����Ϣ
		memcpy(memory_map[step], maps, sizeof(maps));

		peo.peopleAimBoxConton();
		peo.peopleMapMove();
		step++;
	}
}

//�ؿ������򣬽���sadwer��
void showpe(People& peo, char input)
{
	switch (input)
	{
	case 80:
	case's':
	{
		peo.befMoveMapPeople(0, 0, 0, 1);
		peopleMoveContonSum(peo);
	}break;
	case 75:
	case'a':
	{
		peo.befMoveMapPeople(1, 0, 0, 0);
		peopleMoveContonSum(peo);
	}break;
	case 77:
	case'd':
	{
		peo.befMoveMapPeople(0, 0, 1, 0);
		peopleMoveContonSum(peo);
	}break;
	case 72:
	case'w':
	{
		peo.befMoveMapPeople(0, 1, 0, 0);
		peopleMoveContonSum(peo);
	}break;
	//����һ��
	case'e':
	{
		if (step > 0) {
			//�ָ���һ����ͼ��λ��
			memcpy(maps, memory_map[step - 1], sizeof(maps));

			//�ָ���һ�������λ��
			peo.map_x = memory_people[step - 1][0];
			peo.map_y = memory_people[step - 1][1];

			peo.view_x = peo.map_x * pl + 8;
			peo.view_y = peo.map_y * pl;

			//��ӡ����
			showbk();
			//��ӡС��
			putimage(peo.view_x, peo.view_y, pw, pl, &img_human2[peo.skin_num], 0, memory_people[step - 1][2] * pl, NOTSRCERASE);
			putimage(peo.view_x, peo.view_y, pw, pl, &img_human[peo.skin_num], 0, memory_people[step - 1][2] * pl, SRCINVERT);

			//������һ
			step--;
			FlushBatchDraw();
		}
	}break;

	//���¿�ʼ��ǰ��
	case'r':
	{
		step = 0;
		cleardevice();
		map(peo);
		putimage(0, 0, &img2);//��ӡ��ʼ������
		showbk();//��ӡ��ʼ������
		putimage(peo.view_x, peo.view_y, pw, pl, &img_human2[peo.skin_num], 0, 0, NOTSRCERASE);//��ӡ��ʼ��С��
		putimage(peo.view_x, peo.view_y, pw, pl, &img_human[peo.skin_num], 0, 0, SRCINVERT);
		FlushBatchDraw();
	}break;
	}
}

bool ifwin()
{
	for (i = 0; i < 25; i++)
		for (j = 0; j < 16; j++)
		{
			if (maps[i][j] == 3)
				return 0;
		}
	return 1;
}

void carton(People& peo)
{
	putimage(0, 0, &img1);
	for (int i = 0; i < pl * 25; i += pl)
		putimage(i, 14 * pl, &img_grass);
	settextcolor(RGB(250, 150, 0));
	settextstyle(22, 0, L"����");
	outtextxy(50, 20, _T("���������������(*^��^*)"));
	settextstyle(25, 0, L"����");
	settextcolor(BROWN);
	outtextxy(50, pl * 13, _T("�����ϱ�û��·���ߵ��˶���Ҳ������·��                   loading������������"));
	peo.view_x = 0;
	peo.view_y = pl * 14;
	int px = peo.view_x, py = peo.view_y, num = 4;
	while (!_kbhit())
	{
		Sleep(10);
		BeginBatchDraw();

		for (i = 4; i > 0; i--)
		{
			peo.move_i[i]++;
			peo.view_x += 12;
			num++;
			if (num == 5)
			{

				px = px + 12 * 4;
				num = 1;
			}
			putimage(px - 8, py, &img_background[skinnum2]);
			putimage(px - 8 - pl, py, &img_background[skinnum2]);
			putimage(peo.view_x, peo.view_y, pw, pl, &img_human2[peo.skin_num], peo.move_i[i] * pw, pl * 2, NOTSRCERASE);
			putimage(peo.view_x, peo.view_y, pw, pl, &img_human[peo.skin_num], peo.move_i[i] * pw, pl * 2, SRCINVERT);
			FlushBatchDraw();
			Sleep(80);
			if (peo.move_i[i] == 3)
				peo.move_i[i] = 0;
			if (peo.view_x >= 26 * pl)
				break;
		}
		if (peo.view_x >= 26 * pl)
			break;
		//if (_kbhit())	break;
	}
	EndBatchDraw();
	if (peo.view_x >= 26 * pl);
	else
		_getch();
}

void cartonend(People& peo)
{
	//mciSendString(L"open ����Ұ��.mp3 alias bgm", 0, 0, 0);//������
	mciSendString(L"pause bgm", NULL, 0, NULL);
	mciSendString(L"open Ƭβ.mp3 alias bgm1", 0, 0, 0);//������
	mciSendString(L"play bgm1 repeat", 0, 0, 0);//��������

	int x3 = pl * 14, y3 = pl * 16, len = 10, step = 0, num = 0;
	BeginBatchDraw();//׼��������ͼ
	while (1)
	{

		clearrectangle(x3 - pl, 0, x3 + pl * 16, pl * 26);
		settextcolor(RGB(250, 150, 0));
		settextstyle(22, 0, L"����");
		outtextxy(x3, y3, _T("��Ϸ���ƣ�������"));
		outtextxy(x3, y3 + 50, _T("�з�С�飺������AC66������"));
		outtextxy(x3, y3 + 100, _T("����ѧԺ��ͼ��Ժ"));
		outtextxy(x3, y3 + 150, _T("�鳤���̲���"));
		outtextxy(x3, y3 + 200, _T("�����٣���"));
		outtextxy(x3, y3 + 250, _T("��Ʒ����ϧ��"));
		outtextxy(x3, y3 + 300, _T("��Ϣ�٣�����"));
		outtextxy(x3, y3 + 350, _T("�����д��ڴ��룺ϧ�ԣ������������̲���"));
		outtextxy(x3, y3 + 400, _T("ͼ�λ�������룺������ϧ�ԣ���"));
		outtextxy(x3, y3 + 450, _T("ͼƬ������������������ϧ��"));
		outtextxy(x3, y3 + 500, _T("�ر���л���ƺ�ѧ����Super�������磬"));
		outtextxy(x3, y3 + 550, _T("          ��ΰѧ����ͼ��������������Ⱥ�"));

		if (num % 10 == 0)
		{
			clearrectangle(peo.view_x - 8, peo.view_y, peo.view_x + pl - 9, peo.view_y + pl - 1);
			putimage(peo.view_x - 8, peo.view_y, &img_background[skinnum2]);
			putimage(peo.view_x, peo.view_y, pw, pl, &img_human2[peo.skin_num], pw * (step % 4), 0, NOTSRCERASE);
			putimage(peo.view_x, peo.view_y, pw, pl, &img_human[peo.skin_num], pw * (step % 4), 0, SRCINVERT);
			step++;
		}

		//	FlushBatchDraw();
		y3 -= 1;
		FlushBatchDraw();
		Sleep(20);
		num++;

		FlushBatchDraw();
		if (y3 + 600 < 0)
		{
			settextstyle(26, 0, L"����", 0.4, 0.4, 1000, 0, 1, 0);
			settextcolor(BROWN);
			outtextxy(x3, pl * 8, _T("��Զ�������õ����鼴��������"));
			settextstyle(18, 0, L"����", 0.4, 0.4, 100, 1, 1, 0);
			outtextxy(x3, pl * 10, _T("��������ر�"));
			FlushBatchDraw();
			system("pause");
			exit(0);
		}
	}
}

//����menu
void printmenu(RECT r,const int b1,const int b11,const int b2,const int b22,const int b3, const int b33)
{
	fillrectangle(pl * 11, pl * b1, pl * 14, pl * b11);
	r = { pl * 11, pl * b1, pl * 14, pl * b11 };
	settextcolor(BLACK);
	drawtext(_T("��ʼ��Ϸ"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	fillrectangle(pl * 11, pl * b2, pl * 14, pl * b22);
	r = { pl * 11, pl * b2, pl * 14, pl * b22 };
	drawtext(_T("��Ϸ����"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

	fillrectangle(pl * 11, pl * b3, pl * 14, pl * b33);
	r = { pl * 11, pl * b3, pl * 14, pl * b33 };
	drawtext(_T("Ƥ������"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

	r = { 0, 0, pl * 25,pl * 8 };
	drawtext(_T("��ӭ������Ϸ"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	FlushBatchDraw();
}

//�˵�
void menu()
{
	const int b1 = 6, b11 = 7;//��ť
	const int b2 = 8, b22 = 9;
	const int b3 = 10, b33 = 11;
	const int nn = 1;
	int skinnum = nn;
	skinnum2 = nn;
	skinnum3 = nn;
	skinnum4 = nn;
	People peo(0, 0, skinnum);
	carton(peo);
	cleardevice();

	RECT r = { 0, 0, pl * 25,pl * 8 };
	map(peo);//���¹ؿ��������Ӿ�����ͼ����
	int flag = 0;
	EASYXMSG k;
	EASYXMSG y;

	flag = 0;
	/************��ʼ**********/
	cleardevice();
	putimage(0, 0, &img2);//��ӡ��ʼ������
	setfillcolor(BROWN);
	//setfillcolor(RGB(115, 74, 18));
	printmenu(r, b1,  b11, b2,  b22,  b3,  b33);
	while (1)
	{
		//setfillcolor(RGB(115, 74, 18));
		flag = 0;
		k = getmessage(EM_MOUSE | EM_KEY);
		if (k.x > pl * 11 && k.x<pl * 14 && k.y>pl * b1 && k.y < pl * b11 && k.message == WM_LBUTTONDOWN)
		{
			//����b1
			setfillcolor(RGB(115, 74, 18));
			fillrectangle(pl * 11, pl * b1, pl * 14, pl * b11);
			r = { pl * 11, pl * b1, pl * 14, pl * b11 };
			settextcolor(BLACK);
			drawtext(_T("��ʼ��Ϸ"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
			FlushBatchDraw();
			Sleep(200);

			cleardevice();
			putimage(0, 0, &img2);//��ӡ��ʼ������


			r = { 0, 0, pl * 25,pl * 8 };
			drawtext(_T("ѡ�ؽ���"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
			FlushBatchDraw();
			while (1)
			{
			
					interfacial();
					/******�������******/
					int t;
					while (1)
					{
						if (_kbhit())
						{
							t = _getch();
						}
						else
							break;
					}
					//����ؿ���ʼ��
					step = 0;
					cleardevice();
					map(peo);
					putimage(0, 0, &img2);//��ӡ��ʼ������
					showbk();//��ӡ��ʼ������
					putimage(peo.view_x, peo.view_y, pw, pl, &img_human2[peo.skin_num], 0, 0, NOTSRCERASE);//��ӡ��ʼ��С��
					putimage(peo.view_x, peo.view_y, pw, pl, &img_human[peo.skin_num], 0, 0, SRCINVERT);
					FlushBatchDraw();
	
					//Sleep(100);//�ָ�����

					while (1)
					{
						//j����ؿ����ܼ���
						input = _getch();  // �����û��Ĳ�ͬ�������ƶ�����������س�
						if (input == 'a' || input == 75 || input == 'w' || input == 72 || input == 's' || input == 80 || input == 'd' || input == 77 || input == 'e' || input == 'r' || input == 'b')
						{
							/**********�������˵�********/
							if (input == 'b')
							{
								cleardevice();
								putimage(0, 0, &img2);//��ӡ��ʼ������
								setfillcolor(BROWN);
								flag = 1;
								printmenu(r, b1, b11, b2, b22, b3, b33);
								break;
							}

							showpe(peo, input);
							if (ifwin() == 1 && level == max_level - 1)
							{
								cartonend(peo);
							}
							else if (ifwin() == 1)
							{
								Sleep(200);
								//BeginBatchDraw();
								//cleardevice();
																		//flag = 0;
									/************��һ��**********/
									//putimage(0, 0, &img2);
								cleardevice();
								putimage(0, 0, &img2);//��ӡ��ʼ������
								setfillcolor(BROWN);
								fillrectangle(pl * 11, pl * b1, pl * 14, pl * b11);
								r = { pl * 11, pl * b1, pl * 14, pl * b11 };
								drawtext(_T("��һ��"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
								fillrectangle(pl * 11, pl * b2, pl * 14, pl * b22);
								r = { pl * 11, pl * b2, pl * 14, pl * b22 };
								drawtext(_T("�������˵�"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
								r = { 0, 0, pl * 25,pl * 8 };
								drawtext(_T("��ʤ����"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
								//Sleep(100);
								FlushBatchDraw();
								while (1)
								{
									k = getmessage(EM_MOUSE | EM_KEY);
									if (k.x > pl * 11 && k.x<pl * 14 && k.y>pl * b1 && k.y < pl * b11 && k.message == WM_LBUTTONDOWN)
									{

										//����b1
										setfillcolor(RGB(115, 74, 18));
										fillrectangle(pl * 11, pl * b1, pl * 14, pl * b11);
										r = { pl * 11, pl * b1, pl * 14, pl * b11 };
										settextcolor(BLACK);
										drawtext(_T("��һ��"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
										FlushBatchDraw();
										Sleep(200);

										cleardevice();
										level++;
										step = 0;

										map(peo);
										putimage(0, 0, &img2);//��ӡ��ʼ������
										showbk();//��ӡ��ʼ������
										putimage(peo.view_x, peo.view_y, pw, pl, &img_human2[peo.skin_num], 0, 0, NOTSRCERASE);//��ӡ��ʼ��С��
										putimage(peo.view_x, peo.view_y, pw, pl, &img_human[peo.skin_num], 0, 0, SRCINVERT);
										FlushBatchDraw();
										Sleep(100);//�ָ�����

										/******�������******/
										int t;
										while (1)
										{
											if (_kbhit())
											{
												t = _getch();
											}
											else
												break;
										}
										/*int k;
										while (1) {
											if (_kbhit())
											{
												k = _getch();
												if (0 == k || 0xE0 == k)
												{
													k = k << 8 | _getch();
												}
											}
											else 
												break;
										}*/

										break;
									}
									else if (k.x > pl * 11 && k.x<pl * 14 && k.y>pl * b2 && k.y < pl * b22 && k.message == WM_LBUTTONDOWN)
									{

										//����b2
										setfillcolor(RGB(115, 74, 18));
										fillrectangle(pl * 11, pl * b2, pl * 14, pl * b22);
										r = { pl * 11, pl * b2, pl * 14, pl * b22 };
										settextcolor(BLACK);
										drawtext(_T("�������˵�"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
										FlushBatchDraw();
										Sleep(200);

										level++;
										step = 0;
										/************��ʼ**********/
										cleardevice();
										putimage(0, 0, &img2);//��ӡ��ʼ������
										setfillcolor(BROWN);
										setfillcolor(BROWN);
										printmenu(r, b1, b11, b2, b22, b3, b33);

										flag = 1;
										break;
									}
								}
							}
						}
						if (flag == 1)
							break;
					}
				//}
				if (flag == 1)
					break;
			}
		}
		else if (k.x > pl * 11 && k.x<pl * 14 && k.y>pl * b2 && k.y < pl * b22 && k.message == WM_LBUTTONDOWN)
		{

		//����b2
		setfillcolor(RGB(115, 74, 18));
		fillrectangle(pl * 11, pl* b2, pl * 14, pl* b22);
		r = { pl * 11, pl * b2, pl * 14, pl * b22 };
		settextcolor(BLACK);
		drawtext(_T("��Ϸ����"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
		FlushBatchDraw();
		Sleep(200);

			cleardevice();
			putimage(0, 0, &img2);//��ӡ��ʼ������
			//fillrectangle(pl * 11, pl * b1, pl * 14, pl * b11);
			setfillcolor(BROWN);
			fillrectangle(pl * 11, pl * b2, pl * 14, pl * b22);
			r = { pl * 11, pl * b2, pl * 14, pl * b22 };
			drawtext(_T("���ز˵�"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
			r = { 0, 0, pl * 25,pl * 8 };
			drawtext(_T("��Ϸ�淨:����ؿ���e������r�ؿ�,b�������˵���"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
			r = { 0, 0, pl * 25,pl * 10 };
			drawtext(_T("�������wasd����С���ƶ���"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
			FlushBatchDraw();
			while (1)
			{
				//flushmessage();
				k = getmessage(EM_MOUSE | EM_KEY);
				if (k.x > pl * 11 && k.x<pl * 14 && k.y>pl * b2 && k.y < pl * b22 && k.message == WM_LBUTTONDOWN)
				{

					//����b2
					setfillcolor(RGB(115, 74, 18));
					fillrectangle(pl * 11, pl* b2, pl * 14, pl* b22);
					r = { pl * 11, pl * b2, pl * 14, pl * b22 };
					settextcolor(BLACK);
					drawtext(_T("���ز˵�"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
					FlushBatchDraw();
					Sleep(200);


					/************��ʼ**********/
					cleardevice();
					putimage(0, 0, &img2);//��ӡ��ʼ������
					setfillcolor(BROWN);
					printmenu(r, b1, b11, b2, b22, b3, b33);
					break;
				}
			}
		}
		else if (k.x > pl * 11 && k.x<pl * 14 && k.y>pl * b3 && k.y < pl * b33 && k.message == WM_LBUTTONDOWN)
		{
			//����b3
			setfillcolor(RGB(115, 74, 18));
			fillrectangle(pl * 11, pl * b3, pl * 14, pl * b33);
			r = { pl * 11, pl * b3, pl * 14, pl * b33 };
			settextcolor(BLACK);
			drawtext(_T("Ƥ������"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
			FlushBatchDraw();
			Sleep(200);


			cleardevice();
			putimage(0, 0, &img2);//��ӡ��ʼ������
			//fillrectangle(pl * 11, pl * b1, pl * 14, pl * b11);
			setfillcolor(BROWN);
			fillrectangle(pl * 11, pl* b3, pl * 14, pl* b33);
			r = { pl * 11, pl * b3, pl * 14, pl * b33 };
			drawtext(_T("���ز˵�"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
			r = { 0, 0, pl * 25,pl * 8 };
			drawtext(_T("Ƥ��"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
			FlushBatchDraw();

			//Ƥ��
			/*wchar_t ss[10];
			InputBox(ss, 10, L"������Ƥ����ţ�");*/
			// ���û�����ת��Ϊ����
			//int rr = _wtoi(ss);
			int rr = chooseskin();
			peo.skin_num= rr;
			skinnum2 = rr;
			skinnum3 = rr;
			skinnum4 = rr;
			/*People peo(0, 0, skinnum); */
			while (1)
			{
				//flushmessage();
				k = getmessage(EM_MOUSE | EM_KEY);
				if (k.x > pl * 11 && k.x<pl * 14 && k.y>pl * b3 && k.y < pl * b33 && k.message == WM_LBUTTONDOWN)
				{

					//����b3
					setfillcolor(RGB(115, 74, 18));
					fillrectangle(pl * 11, pl * b3, pl * 14, pl * b33);
					r = { pl * 11, pl * b3, pl * 14, pl * b33 };
					settextcolor(BLACK);
					drawtext(_T("���ز˵�"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
					FlushBatchDraw();
					Sleep(200);


					/************��ʼ**********/
					cleardevice();
					putimage(0, 0, &img2);//��ӡ��ʼ������
					setfillcolor(BROWN);
					printmenu(r, b1, b11, b2, b22, b3, b33);
					break;
				}
			}
			
		}
	}
}

int main()
{
	initgraph(pl * 25, pl * 16);
	setbkmode(TRANSPARENT);

	mciSendString(L"open ����Ұ��.mp3 alias bgm", 0, 0, 0);//������
	mciSendString(L"play bgm repeat", 0, 0, 0);//��������
	//mciSendString(L"play ���찮��������.mp3", NULL, 0, NULL);
	//��ͣ           mciSendString("pause 1.mp3", NULL, 0, NULL)��
	//Ҫʵ��ֹͣ��   mciSendString("close 1.mp3", NULL, 0, NULL)

	/*0��· 1ǽ��  3Ŀ�ĵ� 4���� 5�� 7���ӵ���Ŀ�ĵ�  8�˸�ס��Ŀ�ĵ� */
	loading();
	menu();
		system("cls");
	_getch();
	closegraph();
	return 0;
}
