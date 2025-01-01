#ifndef DISPLAY_H 
#define DISPLAY_H

#include <windows.h>

void gotoxy(unsigned short x, unsigned short y) {
    COORD pos = { x, y };
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOut, pos);
}

//显示器类
class Display {
private:
    unsigned short width;
    unsigned short height;

public:
    Display(unsigned short width, unsigned short height); // 构造函数
    void setPixel(unsigned short x, unsigned short y, bool value); // 设置像素点
    void print_str(const char* str, unsigned short x, unsigned short y); // 打印字符串
    void print_num(short num, unsigned short x, unsigned short y); // 打印数字
};

#include"Display.cpp"
#endif