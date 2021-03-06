#include"stdafx.h"
#include"stdio.h"
#include<conio.h>
#include<graphics.h>
#include<time.h>
#include<mmsystem.h>
#pragma comment(lib, "WINMM.LIB")

/*To make it easy to read,we put all the functions written by us together.All the functions bellow are written bu us.The functions in other files are not.*/
void HideCursor()//隐藏光标
{
	CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
} /*this function is to hide the cursor ,but finally we decided not to use it.*/
void xy(int x, int y)//位置函数  
{
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);//如果用户定义了 COORD pos，那么pos其实是一个结构体变量，其中X和Y是它的成员，通过修改pos.X和pos.Y的值就可以实现光标的位置控制。SetConsoleCursorPosition是API中定位光标位置的函数。

}/*this function can put the cursor to a certain position.*/
void lose_animation()
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		xy(15, 10 + i);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 15; i++)
	{
		xy(15 + i, 20);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 15; i++)
	{
		xy(33 + i, 20);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 10; i++)
	{
		xy(48, 20 - i);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 15; i++)
	{
		xy(48 - i, 10);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 10; i++)
	{
		xy(33, 10 + i);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 13; i++)
	{
		xy(66 - i, 10);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 5; i++)
	{
		xy(53, 10 + i);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 13; i++)
	{
		xy(53 + i, 15);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 5; i++)
	{
		xy(66, 15 + i);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 13; i++)
	{
		xy(66 - i, 20);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 13; i++)
	{
		xy(70 + i, 10);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 13; i++)
	{
		xy(70 + i, 15);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 10; i++)
	{
		xy(70, 10 + i);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 13; i++)
	{
		xy(70 + i, 20);
		printf("*");
		Sleep(50);
	}
}/*when you lose, we use this function to draw 'lose' on the screen.*/
void win_animation()
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		xy(7 + i, 10 + i);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 10; i++)
	{
		xy(17 + i, 20 - i);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 10; i++)
	{
		xy(27 + i, 10 + i);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 10; i++)
	{
		xy(37 + i, 20 - i);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 17; i++)
	{
		xy(50 + i, 10);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 10; i++)
	{
		xy(58, 10 + i);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 17; i++)
	{
		xy(50 + i, 20);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 10; i++)
	{
		xy(71, 20 - i);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 10; i++)
	{
		xy(71 + i, 10 + i);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 10; i++)
	{
		xy(81, 20 - i);
		printf("*");
		Sleep(50);
	}
	for (i = 0; i <= 10; i++)
	{
		xy(88, 10 + i);
		printf("*");
		Sleep(50);
	}
	xy(88, 24);
	printf("*");
	Sleep(50);
	xy(87, 24);
	printf("*");
	Sleep(50);
	xy(87, 23);
	printf("*");
	Sleep(50);
	xy(87, 22);
	printf("*");
	Sleep(50);
	xy(87, 22);
	printf("*");
	Sleep(50);
	xy(88, 22);
	printf("*");
	Sleep(50);
	xy(89, 22);
	printf("*");
	Sleep(50);
	xy(89, 23);
	printf("*");
	Sleep(50);
	xy(89, 24);
	printf("*");
	Sleep(50);
	xy(88, 23);
	printf("*");
	Sleep(50);
	for (i = 0; i <= 10; i++)
	{
		xy(95, 10 + i);
		printf("*");
		Sleep(50);
	}
	printf("*");
	Sleep(50);
	xy(95, 24);
	printf("*");
	Sleep(50);
	xy(94, 24);
	printf("*");
	Sleep(50);
	xy(94, 23);
	printf("*");
	Sleep(50);
	xy(94, 22);
	printf("*");
	Sleep(50);
	xy(95, 22);
	printf("*");
	Sleep(50);
	xy(96, 22);
	printf("*");
	Sleep(50);
	xy(96, 23);
	printf("*");
	Sleep(50);
	xy(96, 24);
	printf("*");
	Sleep(50);
	xy(95, 23);
	printf("*");
	Sleep(50);

}/*when you win the game ,we use this function to draw 'win !!' on the screen.*/
void boot_animation()
{
	int i;
	for (i = 0; i < 7; i++)
	{
		xy(8, 13 + i);
		printf("*");
		Sleep(100);
	}

	for (i = 0; i < 3; i++)
	{
		xy(9 + i, 13);
		printf("*");
		Sleep(100);
	}
	for (i = 0; i < 2; i++)
	{
		xy(12, 14 + i);
		printf("*");
		Sleep(100);
	}
	xy(11, 16);
	printf("*");
	Sleep(100);
	xy(10, 16);
	printf("*");
	Sleep(100);
	xy(9, 16);
	printf("*");
	Sleep(100);
	for (i = 0; i < 7; i++)
	{
		xy(15, 13 + i);
		printf("*");
		Sleep(100);
	}
	for (i = 0; i < 4; i++)
	{
		xy(16 + i, 19);
		printf("*");
		Sleep(100);
	}

	for (i = 0; i < 7; i++)
	{
		xy(21 + i, 19 - i);
		printf("*");
		Sleep(100);
	}
	for (i = 0; i < 6; i++)
	{
		xy(28 + i, 14 + i);
		printf("*");
		Sleep(100);
	}
	xy(25, 16);
	printf("*");
	Sleep(100);
	xy(26, 16);
	printf("*");
	Sleep(100);
	xy(27, 16);
	printf("*");
	Sleep(100);
	xy(28, 16);
	printf("*");
	Sleep(100);
	xy(29, 16);
	printf("*");
	Sleep(100);
	for (i = 0; i < 7; i++)
	{
		xy(35, 19 - i);
		printf("*");
		Sleep(100);
	}
	for (i = 0; i < 5; i++)
	{
		xy(36 + i, 14 + i);
		printf("*");
		Sleep(100);
	}
	for (i = 0; i < 7; i++) {
		xy(41, 19 - i);
		printf("*");
		Sleep(100);
	}
	for (i = 0; i < 7; i++)
	{
		xy(45 + i, 13);
		printf("*");
		Sleep(100);
	}
	for (i = 0; i < 6; i++)
	{
		xy(45, 14 + i);
		printf("*");
		Sleep(100);
	}
	for (i = 0; i < 6; i++)
	{
		xy(46 + i, 16);
		printf("*");
		Sleep(100);
	}
	for (i = 0; i < 6; i++)
	{
		xy(46 + i, 19);
		printf("*");
		Sleep(100);
	}
	for (i = 0; i < 7; i++)
	{
		xy(60 + i, 13);
		printf("*");
		Sleep(100);
	}
	for (i = 0; i < 6; i++)
	{
		xy(60, 14 + i);
		printf("*");
		Sleep(100);
	}
	for (i = 0; i < 6; i++)
	{
		xy(61 + i, 16);
		printf("*");
		Sleep(100);
	}

	for (i = 0; i < 7; i++)
	{
		xy(68 + i, 13);
		printf("*");
		Sleep(100);
	}
	for (i = 0; i < 6; i++)
	{
		xy(71, 14 + i);
		printf("*");
		Sleep(100);
	}
	for (i = 0; i < 7; i++)
	{
		xy(68 + i, 19);
		printf("*");
		Sleep(100);
	}

	for (i = 0; i < 6; i++)
	{
		xy(78 + i, 13);
		printf("*");
		Sleep(100);
	}
	for (i = 0; i < 6; i++)
	{
		xy(78, 14 + i);
		printf("*");
		Sleep(100);
	}
	for (i = 0; i < 5; i++)
	{
		xy(79 + i, 19);
		printf("*");
		Sleep(100);
	}
	for (i = 0; i < 2; i++)
	{
		xy(83, 18 - i);
		printf("*");
		Sleep(100);
	}

	xy(83, 16);
	printf("*");
	Sleep(100);
	xy(82, 16);
	printf("*");
	Sleep(100);
	xy(81, 16);
	printf("*");
	Sleep(100);

	xy(80, 16);
	printf("*");
	Sleep(100);
	xy(79, 16);
	printf("*");
	Sleep(100);


	for (i = 0; i < 7; i++)
	{
		xy(86, 13 + i);
		printf("*");
		Sleep(100);
	}
	for (i = 0; i < 6; i++)
	{
		xy(87 + i, 16);
		printf("*");
		Sleep(100);
	}
	for (i = 0; i < 7; i++)
	{
		xy(92, 13 + i);
		printf("*");
		Sleep(100);
	}

	for (i = 0; i < 9; i++)
	{
		xy(94 + i, 13);
		printf("*");
		Sleep(100);
	}
	for (i = 0; i < 6; i++)
	{
		xy(98, 14 + i);
		printf("*");
		Sleep(100);
	}
	Sleep(3000);

}/*this function can draw 'plane fight 'on the screen.*/
void my_plane(int x, int y)
{
	x = x - 50;
	y = y - 20;
	setlinecolor(YELLOW);
	line(x + 50, y + 0, x + 30, y + 40);
	line(x + 30, y + 40, x + 40, y + 50);
	line(x + 40, y + 50, x + 50, y + 45);
	line(x + 50, y + 45, x + 60, y + 50);
	line(x + 60, y + 50, x + 70, y + 40);
	line(x + 70, y + 40, x + 50, y + 0);
	line(x + 50, y + 10, x + 40, y + 30);
	line(x + 40, y + 30, x + 60, y + 30);
	line(x + 60, y + 30, x + 50, y + 10);
	setfillcolor(RED);
	floodfill(x + 50, y + 5, YELLOW);
	setfillcolor(GREEN);
	floodfill(x + 50, y + 15, YELLOW);

}/*this can draw the player' plane on the screen.*/
void hostile_plane(int x, int y)
{
	x = x - 50;
	y = y - 20;
	setlinecolor(YELLOW);
	line(x + 40, y + 0, x + 30, y + 10);
	line(x + 30, y + 10, x + 50, y + 50);
	line(x + 50, y + 50, x + 70, y + 10);
	line(x + 70, y + 10, x + 60, y + 0);
	line(x + 60, y + 0, x + 50, y + 5);
	line(x + 50, y + 5, x + 40, y + 0);
	line(x + 40, y + 20, x + 50, y + 40);
	line(x + 50, y + 40, x + 60, y + 20);
	line(x + 60, y + 20, x + 40, y + 20);
	setfillcolor(BLUE);
	floodfill(x + 50, y + 45, YELLOW);
	setfillcolor(MAGENTA);
	floodfill(x + 50, y + 35, YELLOW);

}/*draw the hostile plane on the screen.*/
void bullet(int x, int y)
{
	setlinecolor(YELLOW);
	setfillcolor(LIGHTRED);
	fillcircle(x, y, 5);
}/*draw the bullet on the screen.*/
void boss_plane(int x, int y)
{
	x = x - 50;
	y = y - 20;
	setlinecolor(YELLOW);
	line(x + 30, y + 0, x + 10, y + 20);
	line(x + 10, y + 20, x + 50, y + 60);
	line(x + 50, y + 60, x + 90, y + 20);
	line(x + 90, y + 20, x + 70, y + 0);
	line(x + 70, y + 0, x + 50, y + 10);
	line(x + 50, y + 10, x + 30, y + 0);
	line(x + 30, y + 20, x + 50, y + 50);
	line(x + 50, y + 50, x + 70, y + 20);
	line(x + 70, y + 20, x + 30, y + 20);
	setfillcolor(BLUE);
	floodfill(x + 50, y + 45, YELLOW);
	setfillcolor(GREEN);
	floodfill(x + 30, y + 5, YELLOW);
}/*to draw the boss plane*/
void boss_bullet(int x, int y)
{
	setlinecolor(YELLOW);
	setfillcolor(GREEN);
	fillcircle(x, y, 10);
}/*draw the boss plane' bullet.*/
void startup(int*pmyplanex, int*pmyplaney, int*pmybulletx, int*pmybullety, int*phoplanex, int*phoplaney, int*phobulletx, int*phobullety, int*pchance, int*pscore)
{	/*we give the origine value to the parameters,the value of our plane is bigger than 0,others are smaller than 0.*/
	int i;
	*pmyplanex = 500; *pmyplaney = 300;
	for (i = 0; i < 3;)
	{
		*pmybulletx = -1; *pmybullety = -1;
		pmybulletx++; pmybullety++; i++;
	}
	for (i = 0; i < 3;)
	{
		*phoplanex = -10; *phoplaney = -10;
		phoplanex++; phoplaney++; i++;
	}
	for (i = 0; i < 3;)
	{
		*phobulletx = -100; *phobullety = -100;
		phobulletx++; phobullety++; i++;
	}
	*pchance = 5;
	*pscore = 0;
}
void show(int *pmyplanex, int*pmyplaney, int*pmybulletx, int*pmybullety, int*phoplanex, int*phoplaney, int*phobulletx, int*phobullety)
{
	int i;
	cleardevice();/*make everything on the screen disappear */
	my_plane(*pmyplanex, *pmyplaney);//redraw our plane
	for (i = 0; i<3;)
	{
		if ((*pmybulletx > 0) && (*pmybullety > 0))
			bullet(*pmybulletx, *pmybullety); i++; pmybulletx++; pmybullety++;
	}/*if the parameter about our bullet is bigger than 0,we will draw the bullet  on the screen.*/
	for (i = 0; i < 3;)
	{
		if ((*phoplanex > 0) && (*phoplaney > 0))
			hostile_plane(*phoplanex, *phoplaney);
		phoplanex++; phoplaney++; i++;
	}/*if the parameters about hostile planes are bigger than 0,we draw them,or we will go to the next step.*/
	for (i = 0; i < 3;)
	{
		if ((*phobulletx > 0) && (*phobullety > 0))
			bullet(*phobulletx, *phobullety);
		phobulletx++; phobullety++; i++;
	}/*to check and draw the  hostile  planes' bullets.*/
}
void updatewithinput(int*pmyplanex, int*pmyplaney, int*pmybulletx, int*pmybullety)
{
	char input; int i;
	if (_kbhit())
	{	/*if the player input something ,we will check what he has input.*/
		input = _getch();
		switch (input)
		{
		case 'a':*pmyplanex = *pmyplanex - 10;
			break;
		case 'd':*pmyplanex = *pmyplanex + 10;
			break;
		case 'w':*pmyplaney = *pmyplaney - 10;
			break;
		case 's':*pmyplaney = *pmyplaney + 10;/*the 'a' 'd' 'w' 's' are used to move our plane*/
			break;
		case 'j':			for (i = 0; i < 3;)/*'j'means the player fired*/
		{
			if ((*pmybulletx < 0) && (*pmybullety < 0))
			{
				*pmybulletx = *pmyplanex; *pmybullety = *pmyplaney; break;
			}
			*pmybulletx++; *pmybullety++; i++;
		} break;
		}
	}
	if (*pmyplanex < 20)
		*pmyplanex = 20;
	if (*pmyplanex > 980)
		*pmyplanex = 980;
	if (*pmyplaney < 30)
		*pmyplaney = 30;
	if (*pmyplaney > 480)
		*pmyplaney = 480;/*this part is used to prevent the plane from going out of the border*/
}
void updatewithoutinput(int*pmybulletx, int*pmybullety, int*phoplanex, int*phoplaney, int*phobulletx, int*phobullety)
{
	int i; int*px; int*py; int*pxx; int*pyy;/*these pointer can store the first location of the parameter group*/
	px = phoplanex; py = phoplaney; pxx = phobulletx; pyy = phobullety;
	for (i = 0; i < 3;)
	{
		if ((*pmybulletx > 0) && (*pmybullety > 0))
			*pmybullety = *pmybullety - 10;
		pmybulletx++; pmybullety++; i++;
	}/*to make our bullets go forward*/
	for (i = 0; i < 3;)
	{
		if ((*phoplanex > 0) && (*phoplaney > 0))
			*phoplaney = *phoplaney + 2;
		phoplanex++; phoplaney++; i++;
	}/*make the hostile's planes go forward*/
	for (i = 0; i < 3;)
	{
		if ((*phobulletx > 0) && (*phobullety > 0))
			*phobullety = *phobullety + 10;
		phobulletx++; phobullety++; i++;
	}/*make the hostille' bullets go forward*/
	phoplanex = px; phoplaney = py; phobulletx = pxx; phobullety = pyy; srand(time(NULL));
	for (i = 0; i < 3;)
	{
		if ((*phoplanex < 0) && (*phoplaney < 0))
			*phoplanex = ((rand() % 10) * 100 + 25) % 1000, *phoplaney = 50;
		phoplanex++; phoplaney++; i++;
	}/*if one of the hostile planes has disappear, it will appear again on the top of the screen */
	phoplanex = px; phoplaney = py; phobulletx = pxx; phobullety = pyy;
	for (i = 0; i < 3;)
	{
		if ((*phoplanex>0) && (*phoplaney>0))
		{
			if ((*phobulletx < 0) && (*phobullety < 0))
				*phobulletx = *phoplanex, *phobullety = *phoplaney;
		}
		phoplanex++; phoplaney++; phobulletx++; phobullety++; i++;
	}/*if one of the hostile plane doesn't have bullet on the screen  ,it will fire right now.*/

}
void check(int*pmyplanex, int*pmyplaney, int*pmybulletx, int*pmybullety, int*phoplanex, int*phoplaney, int*phobulletx, int*phobullety, int*pchance, int*pscore)
{
	int i, j;
	int blastx = 1000; int blasty = 1000;
	int attackx = 1000; int attacky = 1000;
	int*px; int*py; int*pxx; int*pyy; int*pxxx; int*pyyy;/*to store some locations of the frist parameter of parameter groups*/
	px = pmybulletx, py = pmybullety, pxx = phoplanex, pyy = phoplaney, pxxx = phobulletx, pyyy = phobullety;
	for (i = 0; i < 3;)
	{
		if (*pmybullety < 10)
			*pmybulletx = -1, *pmybullety = -1;
		pmybulletx++; pmybullety++; i++;
	}/*if our bullets go out of the border , they will disappear*/
	for (i = 0; i < 3;)
	{
		if (*phoplaney > 490)
			*phoplanex = -10, *phoplaney = -10;
		phoplanex++; phoplaney++; i++;
	}/*if the hostile planes go out of the border ,the will disappear*/
	for (i = 0; i < 3;)
	{
		if (*phobullety > 500)
			*phobulletx = -100, *phobullety = -100;
		phobulletx++; phobullety++; i++;
	}/*if the hostile planes'bullets go out of the border , they will disappear*/
	pmybulletx = px, pmybullety = py, phoplanex = pxx, phoplaney = pyy, phobulletx = pxxx, phobullety = pyyy;
	for (i = 0; i < 3;)
	{
		if ((*phobulletx > 0) && (*phobullety > 0))/*if there is hostile plane's bullet on the screen, we will check if it is close to our plane */
		{
			attackx = (*pmyplanex - *phobulletx)*(*pmyplanex - *phobulletx);
			attacky = (*pmyplaney - *phobullety)*(*pmyplaney - *phobullety);
			if ((attackx < 100) && (attacky < 100))/*if the hostile plane's bullet is close enough to our plane*/
				*phobulletx = -100, *phobullety = -100, *pchance = *pchance - 1, attackx = 1000, attacky = 1000;
		}/*the hostile plane's bullet disappear,and the life of our plane will lose 1.*/
		phobulletx++; phobullety++; i++;
	}
	for (i = 0; i < 3;)
	{
		if ((*pmybulletx > 0) && (*pmybullety > 0))/*if we have bullet on the screen*/
		{
			for (j = 0; j < 3;)
			{
				if ((*phoplanex > 0) && (*phoplaney > 0))/*if there is hostile plane on the screen*/
				{
					blastx = (*pmybulletx - *phoplanex)*(*pmybulletx - *phoplanex);
					blasty = (*pmybullety - *phoplaney)*(*pmybullety - *phoplaney);
					if ((blastx < 100) && (blasty < 100))/*if our bullet is close enough to one of the hostile plane*/
						*pmybulletx = -1, *pmybullety = -1, *pscore = *pscore + 1, *phoplanex = -10, *phoplaney = -10;
					blastx = 1000, blasty = 1000;
				}/*our bullet will disappear,the hostile plane being fired will disappear,and our score will plus 1.*/
				phoplanex++; phoplaney++; j++;
			}
		}
		pmybulletx++; pmybullety++; i++;
	}

}
void bossshow(int*pmyplanex, int*pmyplaney, int*pmybulletx, int*pmybullety, int*pbossx, int*pbossy, int*pbossbulletx, int*pbossbullety)
{	/*this function is simalar to the show .the only difference is that it draws bossplane and bossbullet instead of hostile plane and hostile bullets*/
	int i;
	cleardevice();
	my_plane(*pmyplanex, *pmyplaney);
	for (i = 0; i < 3;)
	{
		if ((*pmybulletx > 0) && (*pmybullety > 0))
			bullet(*pmybulletx, *pmybullety);
		pmybulletx++; pmybullety++; i++;
	}
	boss_plane(*pbossx, *pbossy);
	if ((pbossbulletx>0) && (pbossbullety>0))
		boss_bullet(*pbossbulletx, *pbossbullety);
}
void bossupdatewithinput(int*pmyplanex, int*pmyplaney, int*pmybulletx, int*pmybullety)
{	/*this function is the same as the 'updatewithinput()'*/
	char input; int i;
	if (_kbhit())
	{
		input = _getch();
		switch (input)
		{
		case 'a':*pmyplanex = *pmyplanex - 10;
			break;
		case 'd':*pmyplanex = *pmyplanex + 10;
			break;
		case 'w':*pmyplaney = *pmyplaney - 10;
			break;
		case 's':*pmyplaney = *pmyplaney + 10;
			break;
		case 'j':			for (i = 0; i < 3;)
		{
			if ((*pmybulletx < 0) && (*pmybullety < 0))
			{
				*pmybulletx = *pmyplanex; *pmybullety = *pmyplaney; break;
			}
			*pmybulletx++; *pmybullety++; i++;
		} break;
		}
	}
	if (*pmyplanex < 20)
		*pmyplanex = 20;
	if (*pmyplanex > 980)
		*pmyplanex = 980;
	if (*pmyplaney < 30)
		*pmyplaney = 30;
	if (*pmyplaney > 480)
		*pmyplaney = 480;
}
void bossupdatewithoutinput(int*pmybulletx, int*pmybullety, int*pbossx, int*pbossy, int*pbossbulletx, int*pbossbullety)
{	/*this function is simalar to the 'updatewithoutinput()',but it updates the parameters about bossplane and bossbullet*/
	int i;
	for (i = 0; i < 3;)
	{
		if ((*pmybulletx > 0) && (*pmybullety > 0))
			*pmybullety = *pmybullety - 10;
		pmybulletx++; pmybullety++; i++;
	}
	srand(time(NULL));
	*pbossx = (rand() % 5 - 2) * 5 + *pbossx;
	if (*pbossx > 950)
		*pbossx = *pbossx - 100;
	if (*pbossx < 50)
		*pbossx = *pbossx + 100;
	if ((*pbossbulletx > 0) && (*pbossbullety > 0))
		*pbossbullety = *pbossbullety + 10;
	if ((*pbossbulletx < 0) && (*pbossbullety < 0))
		*pbossbulletx = *pbossx, *pbossbullety = *pbossy;
}
void bosscheck(int*pmyplanex, int*pmyplaney, int*pmybulletx, int*pmybullety, int*pbossx, int*pbossy, int*pbossbulletx, int*pbossbullety, int*pchance, int*pscore)
{	/*this function is simalar to the 'check()',but it checks whether we have hit the bossplane and whether the bossplane has hit our plane*/
	int i; int*px; int*py;
	int attackx = 100000; int attacky = 100000;
	int blastx = 100000; int blasty = 100000;
	px = pmybulletx, py = pmybullety;
	for (i = 0; i < 3;)
	{
		if (*pmybullety < 5)
			*pmybulletx = -1, *pmybullety = -1;
		pmybulletx++; pmybullety++; i++;
	}
	if (*pbossbullety > 480)
		*pbossbulletx = -1000, *pbossbullety = -1000;
	if ((*pbossbulletx > 0) && (*pbossbullety > 0))
	{
		attackx = (*pmyplanex - *pbossbulletx)*(*pmyplanex - *pbossbulletx);
		attacky = (*pmyplaney - *pbossbullety)*(*pmyplaney - *pbossbullety);
		if ((attackx < 400) && (attacky < 400))
		{
			*pbossbulletx = -1000, *pbossbullety = -1000;
			*pchance = *pchance - 1;
		}
	}
	pmybulletx = px; pmybullety = py;
	for (i = 0; i < 3;)
	{
		if ((*pmybulletx > 0) && (*pmybullety > 0))
		{
			blastx = (*pmybulletx - *pbossx)*(*pmybulletx - *pbossx);
			blasty = (*pmybullety - *pbossy)*(*pmybullety - *pbossy);
			if ((blastx < 400) && (blasty < 400))
			{
				*pmybulletx = -1, *pmybullety = -1, *pscore = *pscore + 1;
			}
			blastx = 100000, blasty = 100000;
		}
		pmybulletx++; pmybullety++; i++;
	}
}
int main()
{
	int ender;/*this parameter is input by the player.it decides whether the game will continue*/
	int mode;/*this parameter if input bu the player,it decides the mode of the game*/
	int time, historyscore;/*time is used to check whether the game should end in the timekeeping mode.historyscore is the highest score you have got*/
	int chance, score;/*chance is the life of our plane, score is the score you have got*/
	int*pchance = &chance; int*pscore = &score;
	int mybulletx[3]; int mybullety[3]; /* the parameter group of our bullet*/
	int*pmybulletx = &mybulletx[0]; int*pmybullety = &mybullety[0];
	int myplanex; int myplaney;/* the parameters of the location of our plane*/
	int*pmyplanex = &myplanex; int*pmyplaney = &myplaney;
	int hobulletx[3]; int hobullety[3];/*the parameter groups about the location of hostile plane's bullets*/
	int *phobulletx = &hobulletx[0]; int *phobullety = &hobullety[0];
	int hoplanex[3]; int hoplaney[3];/*the parameter groups about the location of hostile planes*/
	int*phoplanex = &hoplanex[0]; int*phoplaney = &hoplaney[0];
	int bossbulletx, bossbullety;/*the location of boss plane's bullet*/
	int*pbossbulletx = &bossbulletx;
	int*pbossbullety = &bossbullety;
	int bossx, bossy;/* the location of the boss plane*/
	int*pbossx = &bossx; int*pbossy = &bossy;
	PlaySound(TEXT("\\Mr.Cali - (Cali Remix).wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);/*to play the background music*/
	boot_animation();
	system("cls");/*make everything on the screen disappear*/
	while (1)
	{
		printf("please chose the mode，1 is timekeeping mode，2 is the boss mode");/*chose the mode of the game*/
		scanf_s("%d", &mode);
		system("cls");
		if (mode == 1)/*timekeeping mode*/
		{
			time = 100;
			initgraph(1000, 500);/*open the  esayx*/
			startup(pmyplanex, pmyplaney, pmybulletx, pmybullety, phoplanex, phoplaney, phobulletx, phobullety, pchance, pscore);
			while (1)
			{
				show(pmyplanex, pmyplaney, pmybulletx, pmybullety, phoplanex, phoplaney, phobulletx, phobullety);/*draw our planes bullets etc*/
				updatewithinput(pmyplanex, pmyplaney, pmybulletx, pmybullety);/*change our plane's location*/
				updatewithoutinput(pmybulletx, pmybullety, phoplanex, phoplaney, phobulletx, phobullety);/*update the loccation of bullets ,hostile planes etc*/
				check(pmyplanex, pmyplaney, pmybulletx, pmybullety, phoplanex, phoplaney, phobulletx, phobullety, pchance, pscore);/*check if the the bullets have hit something*/
				Sleep(100);
				time--;
				if ((chance < 0) || (time<0))/*to check if the game has end*/
					break;
			}
			_getch();
			closegraph();/*close the easyx*/
			system("cls");
			FILE * fp;
			errno_t scorefile;
			if ((scorefile = fopen_s(&fp, "score1", "r")) != 0)
			{

				if ((scorefile = fopen_s(&fp, "score1", "w+")) != 0)
				{

				}
			}/*creat a file to store the highest score*/
			historyscore = fgetc(fp);
			fclose(fp);
			if ((scorefile = fopen_s(&fp, "score1", "r+")) != 0)
			{
				printf("error\n");

			}/*check if the score is bigger than the highest score*/
			if (score > historyscore)
			{
				historyscore = score;
				fputc(historyscore, fp);
			}/*update the highest score*/
			fclose(fp);
			printf("\n\n\n\n\n score：%d\n the highest score：%d", score, historyscore);	/*print the highest score*/
			Sleep(3000);
			system("cls");

		}
		if (mode == 2)/*boss mode*/
		{
			initgraph(1000, 500);
			startup(pmyplanex, pmyplaney, pmybulletx, pmybullety, phoplanex, phoplaney, phobulletx, phobullety, pchance, pscore);
			while (1)
			{
				show(pmyplanex, pmyplaney, pmybulletx, pmybullety, phoplanex, phoplaney, phobulletx, phobullety);
				updatewithinput(pmyplanex, pmyplaney, pmybulletx, pmybullety);
				updatewithoutinput(pmybulletx, pmybullety, phoplanex, phoplaney, phobulletx, phobullety);
				check(pmyplanex, pmyplaney, pmybulletx, pmybullety, phoplanex, phoplaney, phobulletx, phobullety, pchance, pscore);
				Sleep(100);
				if ((chance < 0) || score>2)/*if our plane has no life or we have kill enough hostile plane ,break*/
					break;
			}
			if (score > 2)/*we kill enough hostile plane,start the boss mode*/
			{
				cleardevice();
				startup(pmyplanex, pmyplaney, pmybulletx, pmybullety, phoplanex, phoplaney, phobulletx, phobullety, pchance, pscore);
				bossx = 500, bossy = 100; bossbulletx = -1000, bossbullety = -1000;
				while (1)
				{
					bossshow(pmyplanex, pmyplaney, pmybulletx, pmybullety, pbossx, pbossy, pbossbulletx, pbossbullety);
					bossupdatewithinput(pmyplanex, pmyplaney, pmybulletx, pmybullety);
					bossupdatewithoutinput(pmybulletx, pmybullety, pbossx, pbossy, pbossbulletx, pbossbullety);
					bosscheck(pmyplanex, pmyplaney, pmybulletx, pmybullety, pbossx, pbossy, pbossbulletx, pbossbullety, pchance, pscore);
					Sleep(100);
					if ((score > 2) || (chance < 0))/*if we kill the boss or the boss kill our plane, break*/
						break;
				}

			}
			_getch();
			closegraph();
			if (chance < 0)
				lose_animation();
			if (chance > 0)
				win_animation();
			Sleep(3000);
			system("cls");
		}
		printf("whether continue to play，if yes please input1，if no please input 2");/*ask the player whether he will continue to play*/
		scanf_s("%d", &ender);
		system("cls");
		if (ender == 2)
			break;
		else;

	}
	return 0;
}
