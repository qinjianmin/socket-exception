#include "lib/common.h"

int main(int argc, char** argv) {
    int socket_fd = tcp_client("localhost", SERV_PORT);

    char buf[129];
    int rc;

    while (1) {
        rc = read(socket_fd, buf, sizeof(buf));
        if (rc < 0)
            error(1, errno, "read failed");
        else if (rc == 0)
            error(1, 0, "peer connection closed\n");
        else
            fputs(buf, stdout);
    }
    exit(0);
}