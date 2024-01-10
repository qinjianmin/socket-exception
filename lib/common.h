#ifndef MID_HOMEWORK_COMMON_H
#define MID_HOMEWORK_COMMON_H

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <strings.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define SERV_PORT 12345
#define MAXLINE 4096
#define LISTENQ 1024

void error(int status, int err, char *fmt, ...);
int tcp_client(const char *ip, int port);
int tcp_server(int port);
int tcp_server_listen(int port);

#endif