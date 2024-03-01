Simple Shell
Overview
Simple Shell is a lightweight Unix shell implementation written in C. It provides users with a command-line interface to interact with the operating system by executing commands and running programs. This shell is designed to be easy to understand, modify, and extend for educational purposes or as a basis for building more complex shell environments.

Features
Command Execution: Execute commands entered by the user, including both built-in commands and external programs.
Built-in Commands: Support for built-in commands such as cd, help, and exit, providing additional functionality directly within the shell.
Path Resolution: Search for executable files in directories specified by the PATH environment variable, allowing users to run programs from any location.
Background Execution: Enable users to run commands in the background, freeing up the shell for further input while the command executes asynchronously.
Input/Output Redirection: Support for input/output redirection (<, >, >>) to manipulate input and output streams.
Pipeline Execution: Enable users to chain multiple commands together using pipes (|) for data flow between processes.


Built-in Commands:

cd: Change the current working directory. Usage: cd [directory].
help: Display help information about the shell and its built-in commands. Usage: help.
exit: Exit the shell. Usage: exit.
Background Execution: To run a command in the background, append & at the end of the command. For example:
Input/Output Redirection: Redirect input and output streams using <, >, and >> operators.

Pipeline Execution: Chain multiple commands together using pipes (|) to pass the output of one command as input to another

