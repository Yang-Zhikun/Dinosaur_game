#include"Display.h"
#include<stdio.h>
/**
 * ���캯������ʼ����ʾ���Ŀ�͸�
 * @param width ��ʾ���Ŀ��
 * @param height ��ʾ���ĸ߶�
 */
Display::Display(unsigned short width, unsigned short height) {
    this->width = width;
    this->height = height;
}


/**
 * �������ص��ֵ
 * @param x ���ص��x����
 * @param y ���ص��y����
 * @param value ���ص��ֵ��1Ϊ����0Ϊ��

 */
void Display::setPixel(unsigned short x, unsigned short y, bool value) {
    if (x > width || y > height) return;
    gotoxy(x, y);
    if (value == 0) printf(" ");
    if (value == 1) printf("*");
}


/**
 * ��ӡ�ַ���
 * @param str �ַ���
 * @param x �ַ�������ʼx����
 * @param y �ַ�������ʼy����
 */
void Display::print_str(const char* str, unsigned short x, unsigned short y) {
    if (x > width || y > height) return;
    gotoxy(x, y);
    printf(str);
}


/**
 * ��ӡ����
 * @param num ����
 * @param x ���ֵ���ʼx����
 * @param y ���ֵ���ʼy����
 */
void Display::print_num(short num, unsigned short x, unsigned short y) {
    if (x > width || y > height) return;
    gotoxy(x, y);
    printf("%d", num);
}
