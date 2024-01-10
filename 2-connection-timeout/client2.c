#include "lib/common.h"

int main(int argc, char** argv) {
    char *ip = argv[1];
    int port = atoi(argv[2]);
    int socket_fd = tcp_client(ip, port);
}