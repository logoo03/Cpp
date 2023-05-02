/* 03 */
#include <stdio.h>

struct email {
    char title[50];
    char receiver[50];
    char sender[50];
    char content[100];
    char date[10];
    int pri;
};

int main(void) {
    struct email e = {
        "안부 메일",
        "chulsoo@hankik.ac.kr",
        "asdf@gmail.com",
        "안녕하십니까? 별일 없으신지요?",
        "2022/12/05",
        3,
    };
    
    printf("제목: %s\n수신자: %s\n발신자: %s\n내용: %s\n날짜: %s\n우선순위: %d\n", 
    e.title, e.receiver, e.sender, e.content, e.date, e.pri);

    return 0;
}