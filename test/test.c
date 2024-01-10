#include "lib/common.h"

int main(int argc, char** argv) {
    int errnum = 60;  // 错误码 60 对应 ENOTCONN
    printf("Error message for errno %d: %s\n", errnum, strerror(errnum));
    return 0;
}