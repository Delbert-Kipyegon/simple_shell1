
# Basic Shell Emulation in C

## Authors
Delbert $ Silvia

## Description
This project represents a basic emulation of a shell, built using the C programming language. It seeks to provide a foundational understanding of shell behaviors and operations by allowing users to execute commands in an emulated environment.

## Allowed Functions and System Calls

For the sake of preserving the project's integrity and the learning process, we've restricted the use of functions and system calls to the following list:

- `access` - Check user's permissions for a file ([man](http://man7.org/linux/man-pages/man2/access.2.html))
- `chdir` - Change the current working directory ([man](http://man7.org/linux/man-pages/man2/chdir.2.html))
- `close` - Close a file descriptor ([man](http://man7.org/linux/man-pages/man2/close.2.html))
- `closedir` - Close a directory ([man](http://man7.org/linux/man-pages/man3/closedir.3.html))
- `execve` - Execute program ([man](http://man7.org/linux/man-pages/man2/execve.2.html))
- `exit` - Cause normal process termination ([man](http://man7.org/linux/man-pages/man3/exit.3.html))
- `_exit` - Terminate the calling process ([man](http://man7.org/linux/man-pages/man2/_exit.2.html))
... [and so on for each function]

## Compilation

The shell is compiled using the following flags to ensure code quality:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

This ensures a standard compliance with the GNU89 standard and checks for various warnings and potential issues in the code.

## Usage

Upon successful compilation, the shell can be invoked using:

```bash
./hsh
```

You'll be presented with a prompt, ready to receive and execute commands.

## Features

1. **Command Execution**: Run commands similar to standard UNIX/Linux shells.
2. **Interactive Mode**: Allows continuous command inputs till an exit command or EOF is received.
3. **Built-in Commands**: Contains standard commands like `cd`, `exit`, and `history`.

(Note: Given the limited set of allowed system calls and functions, some advanced shell functionalities might not be present.)

## Contributing

Contributions are welcome! Kindly fork the repository, make your desired changes, and submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).

## Acknowledgments

We'd like to extend our gratitude to all those who've offered feedback, insights, and shared resources which have been instrumental in the realization of this project.
