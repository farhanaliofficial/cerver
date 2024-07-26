#ifndef SERVER_H
#define SERVER_H

#include <netinet/in.h>

#define BUFFER_SIZE  1024
#define MAX_ROUTES 20
#define TIME_BUFFER_SIZE 80
#define METHOD_BUFFER_SIZE 20
#define PATH_BUFFER_SIZE 100

typedef struct{
	int port;
	int server_fd;
	int addrlen;
	struct sockaddr_in address;
} Server;

typedef struct{
	char *route;
	char *file_path;
} Route;


void init_server(Server *server, int port);
void start_server(Server *server);
void handle_client(int client_socket);
void add_route(char *route, char *file_path);
void handle_route(int client_socket, char *route);
void handle_route_not_found(int client_socket);
void serve_file(int client_socket, char *file_path);
char* get_mime_type(char *file_path);
void logger(char *method, char *path);

#endif