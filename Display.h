#ifndef DISPLAY_H 
#define DISPLAY_H

#include <windows.h>

void gotoxy(unsigned short x, unsigned short y) {
    COORD pos = { x, y };
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOut, pos);
}

//��ʾ����
class Display {
private:
    unsigned short width;
    unsigned short height;

public:
    Display(unsigned short width, unsigned short height); // ���캯��
    void setPixel(unsigned short x, unsigned short y, bool value); // �������ص�
    void print_str(const char* str, unsigned short x, unsigned short y); // ��ӡ�ַ���
    void print_num(short num, unsigned short x, unsigned short y); // ��ӡ����
};

#include"Display.cpp"
#endif