# Pomodoro.c

A simple Pomodoro timer written in C to help you stay focused and productive. This program runs in the console and follows the traditional Pomodoro technique of 25 minutes of focused work followed by a 5-minute break.

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Requirements](#requirements)
- [Usage](#usage)
- [Build](#build)
- [Platform Support](#platform-support)
- [Contributing](#contributing)
- [License](#license)

## Introduction

Pomodoro.c is a command-line Pomodoro timer designed to boost your productivity and concentration. With a focus on simplicity, this C program allows you to customize the work and break durations according to your preferences.

## Features

- Configurable work and break durations.
- Cross-platform beep sound for notifications.
- Easy to use with a straightforward command-line interface.

## Requirements

To run Pomodoro.c, you need:

- C compiler (GCC recommended)
- Standard C libraries

## Usage

To use Pomodoro.c, follow these simple steps:

1. Open your terminal.
2. Navigate to the directory containing the `pomodoro.c` file.
3. Compile the program using a C compiler:

    ```bash
    gcc pomodoro.c -o pomodoro
    ```

4. Run the compiled executable:

    ```bash
    ./pomodoro [work_minutes] [break_minutes]
    ```

   - `work_minutes` (optional): Duration of the work interval in minutes (default: 25).
   - `break_minutes` (optional): Duration of the break interval in minutes (default: 5).

5. Enjoy focused work sessions and breaks with Pomodoro.c!

## Build

If you want to build the program from source, you can use the provided Makefile. Simply run the following command:

```bash
make
```

This will compile the program and create the executable `pomodoro`.

## Platform Support

Pomodoro.c supports the following platforms:

- Windows (with beep sound)
- Linux
- macOS

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, feel free to open an issue or submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE). Feel free to use and modify the code according to your needs.
