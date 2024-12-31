#ifndef DISPLAY_H 
#define DISPLAY_H

//��ʾ����
class Display{
private:
    unsigned int width;
    unsigned int height;

public:
    Display(unsigned int width, unsigned int height); // ���캯��
    void setPixel(unsigned int x, unsigned int y); // �������ص�
    void print_str(const char* str, unsigned int x, unsigned int y); // ��ӡ�ַ���
    void print_num(int num, unsigned int x, unsigned int y); // ��ӡ����
};


#endif