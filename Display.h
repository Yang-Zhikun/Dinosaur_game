#ifndef DISPLAY_H 
#define DISPLAY_H

//显示器类
class Display{
private:
    unsigned int width;
    unsigned int height;

public:
    Display(unsigned int width, unsigned int height); // 构造函数
    void setPixel(unsigned int x, unsigned int y); // 设置像素点
    void print_str(const char* str, unsigned int x, unsigned int y); // 打印字符串
    void print_num(int num, unsigned int x, unsigned int y); // 打印数字
};


#endif