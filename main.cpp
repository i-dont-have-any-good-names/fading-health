#include <stdio.h>

class Cal {
public:
    int num;
    int num1;
    char option[16];
    void func() {
        scanf("%d", &num);
        scanf("%d", &num1);
        scanf("%s", option);
        if (option == "add") {
            num += num1;
            printf("%d", num);
        }
    }
};

int main() {
    Cal cal;
    cal.func();
    return 0;
}