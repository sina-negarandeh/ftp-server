#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define PORT 8080
#define CLIENTS_NUMBER 30
#define MESSAGE_BUFFER_SIZE 1024

void ExitWithError(std::string error);

void openCommandChannel();

void handleConnections();

void closeCommandChannel();

#endif
