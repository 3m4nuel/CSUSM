#ifndef RDT_H_INCLUDED
#define RDT_H_INCLUDED

#include <sys/socket.h>

int rdt_socket(int address_family, int type, int protocol);

int rdt_bind(int socket_descriptor, const struct sockaddr *local_address, socklen_t address_length);

int rdt_recv(int socket_descriptor, char *buffer, int buffer_length, int flags, struct sockaddr *from_address, int *address_length);

int rdt_sendto(int socket_descriptor, char *buffer, int buffer_length, int flags, struct sockaddr *destination_address, int address_length);

int rdt_close(int fildes);

#endif // RDT_H_INCLUDED