#include "lib/common.h"

static void sig_pipe(int signo) {
    printf("SIGPIPE(%d)\n", signo);
}

int main(int argc, char** argv) {
    int socket_fd = tcp_client("localhost", SERV_PORT);

    char buf[129];
    int len;
    int rc;

    signal(SIGPIPE, sig_pipe);

    while (fgets(buf, sizeof(buf), stdin) != NULL) {
        len = strlen(buf);
        rc = write(socket_fd, buf, len);
        if (rc < 0)
            error(1, errno, "write failed");
    }
    exit(0);
}