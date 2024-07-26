# Cerver

**Cerver** is a lightweight HTTP server implemented in C, designed to handle basic HTTP requests and serve static files. It features routing, MIME type handling, and logging functionalities.

![License](https://img.shields.io/badge/License-MIT-green)
![Release](https://img.shields.io/github/release/farhanaliofficial/cerver)
![Stars](https://img.shields.io/github/stars/farhanaliofficial/cerver)
![Forks](https://img.shields.io/github/forks/farhanaliofficial/cerver)

## Features

- **Basic HTTP Server**: Serves static files over HTTP.
- **Custom Routing**: Map routes to specific file paths.
- **MIME Type Handling**: Supports multiple file types.
- **Logging**: Provides request logs with timestamps.

## Getting Started

### Prerequisites

- GCC compiler
- Standard C library

### Installation

1. **Clone the repository:**

   ```bash
   git clone https://github.com/farhanaliofficial/cerver.git
   cd cerver
   ```

2. **Use with your project**
   ```#include "server.h"```

### Example Usage

1. **Add Routes:**

   To define routes and serve files, include `server.h` in your source code and use the provided functions. Here’s a simple example of setting up routes:

   ```c
   #include "server.h"

   int main() {
       Server server;
       init_server(&server, 8080);

       add_route("/", "index.html");
       add_route("/about", "about.html");

       start_server(&server);

       return 0;
   }
   ```

2. **Create Files:**

   Place the files `index.html` and `about.html` in the same directory as your executable or adjust the paths accordingly.

3. **Accessing the Server:**

   Open a web browser and navigate to `http://localhost:8080` to view the `index.html` file. Navigate to `http://localhost:8080/about` to view the `about.html` file.

## Supported MIME Types

- `text/html`
- `text/css`
- `application/javascript`
- `application/json`
- `image/png`
- `image/jpeg`
- `image/gif`
- `text/plain`
  
## Contributing

Feel free to open issues or submit pull requests to improve Cerver. Contributions are welcome!

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contact

Developed by [Farhan Ali](https://github.com/farhanaliofficial). For any questions or feedback, please reach out via GitHub.
