#include"Conpany.h"
#include"Marketing Department.h"

void bgm()
{
    mciSendString("open ./b.mp3", 0, 0, 0);
    mciSendString("play ./b.mp3 repeat", 0, 0, 0);
}

int main() {
   
    bgm();
    Marketing_Department test;
    test.meanue();
    return 0;
}