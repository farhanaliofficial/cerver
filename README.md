# Cerver

Cerver is a lightweight and straightforward HTTP server library written in C, designed to be easy to use and integrate into your projects. Created by Farhan Ali ([@farhanaliofficial](https://github.com/farhanaliofficial)), this library allows you to quickly set up a server, define routes, and serve static files with minimal setup. Whether you're building a small personal project or a larger application, Cerver provides the essential tools needed to handle HTTP requests efficiently.

![GitHub stars](https://img.shields.io/github/stars/farhanaliofficial/cerver.svg)
![GitHub forks](https://img.shields.io/github/forks/farhanaliofficial/cerver.svg)
![GitHub issues](https://img.shields.io/github/issues/farhanaliofficial/cerver.svg)
![GitHub release](https://img.shields.io/github/release/farhanaliofficial/cerver.svg)

## Features

- Simple and easy to use
- Supports adding multiple routes
- Serves static files
- Logs HTTP requests

## Installation

To use `cerver`, clone the repository and include the `server.h` and `server.c` files in your project.

```bash
git clone https://github.com/farhanaliofficial/cerver.git
```

## Usage

### Example

```c
#include "server.h"
#include <stdio.h>

int main() {
    Server server;
    init_server(&server, 3000);

    add_route("/", "web/index.html");
    add_route("/about", "web/about.html");
    add_route("/contact", "web/contact.html");

    start_server(&server);

    return 0;
}
```

## API

### Structs

#### `Server`

```c
typedef struct {
    int port;
    int server_fd;
    int addrlen;
    struct sockaddr_in address;
} Server;

```

#### `Route`

```c
typedef struct {
    char *route;
    char *file_path;
} Route;
```

### Functions

#### `void init_server(Server *server, int port);`

Initializes the server with the specified port.

- `server`: A pointer to the `Server` structure.
- `port`: The port number to listen on.

#### `void add_route(char *route, char *file_path);`

Adds a new route to the server.

- `route`: The URL path for the route.
- `file_path`: The file path to serve when the route is accessed.

#### `void start_server(Server *server);`

Starts the server and listens for incoming connections.

- `server`: A pointer to the `Server` structure.

## Contributing

Feel free to submit issues and pull requests! Contributions are welcome.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
