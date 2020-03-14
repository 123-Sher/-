#include <stdio.h> 
#include <conio.h> 
#include <time.h> 
#include <stdlib.h>
#include <windows.h> 
#include <mmsystem.h>
#pragma comment(lib,"Winmm.lib")
void gotoxy(int x, int y); 
int main()
{
	system("color f0");
    long i;
	char FileName[100], hi[4800];
	FILE *in;
	//getch(); 
	printf("字符动画即将开始\n");
	Sleep(1000);
    printf("3\n");
    Sleep(1000);
    printf("2\n");
    Sleep(1000);
    printf("1\n");
    Sleep(1000);
    printf("start/n");
	
	for(i=1;i<=641;i++)
	{
		sprintf(FileName,"C:\\Users\\86155\\Pictures\\Saved Pictures (%ld).txt",i);
        
	in=fopen(FileName,"r");
	fread(hi,1,4800,in);
	printf("%s\n%d",hi,i);
	Sleep(29);
	gotoxy(100,1);fclose(in); 
	}
} 
void gotoxy(int x, int y) 
	{
		COORD pos;pos.X = x ;pos.Y = y ;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	}