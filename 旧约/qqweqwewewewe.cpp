#include <conio.h>
#include<windows.h>
#include<stdio.h>
#include<inttypes.h>


#define DEFAULT_COLOR (FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE)
int main(){
	static HANDLE handle;
static CONSOLE_CURSOR_INFO old_cursor_info;
static CONSOLE_SCREEN_BUFFER_INFO old_console_info;
	handle=GetStdHandle(STD_OUTPUT_HANDLE);
		GetConsoleCursorInfo(handle,&old_cursor_info);
	CONSOLE_CURSOR_INFO info = old_cursor_info;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(handle, &info);

    // 获取控制台有关信息
    GetConsoleScreenBufferInfo(handle, &old_console_info);
	int type=0;
	SetConsoleTextAttribute(handle,(7)|FOREGROUND_INTENSITY);
	printf("%s","田");
} 
