#include"Display.h"
#include<stdio.h>
/**
 * 构造函数，初始化显示器的宽和高
 * @param width 显示器的宽度
 * @param height 显示器的高度
 */
Display::Display(unsigned short width, unsigned short height) {
    this->width = width;
    this->height = height;
}


/**
 * 设置像素点的值
 * @param x 像素点的x坐标
 * @param y 像素点的y坐标
 * @param value 像素点的值，1为亮，0为暗

 */
void Display::setPixel(unsigned short x, unsigned short y, bool value) {
    if (x > width || y > height) return;
    gotoxy(x, y);
    if (value == 0) printf(" ");
    if (value == 1) printf("*");
}


/**
 * 打印字符串
 * @param str 字符串
 * @param x 字符串的起始x坐标
 * @param y 字符串的起始y坐标
 */
void Display::print_str(const char* str, unsigned short x, unsigned short y) {
    if (x > width || y > height) return;
    gotoxy(x, y);
    printf(str);
}


/**
 * 打印数字
 * @param num 数字
 * @param x 数字的起始x坐标
 * @param y 数字的起始y坐标
 */
void Display::print_num(short num, unsigned short x, unsigned short y) {
    if (x > width || y > height) return;
    gotoxy(x, y);
    printf("%d", num);
}
