# get_next_line - 42 Lisboa 📜

A function that reads a line from a file descriptor, returnable upon each call.

## 📝 Description
The goal of the **get_next_line** project is to create a function that returns a line read from a file descriptor. This project introduces the concept of **static variables** in C programming and reinforces memory management skills using `malloc` and `free`.

## 🚀 Key Features
- **Line-by-line Reading:** Returns one line at a time from a file or standard input.
- **Static Variables:** Efficiently manages data between function calls.
- **Dynamic Buffer:** Works with any `BUFFER_SIZE` defined at compilation time.
- **Memory Efficient:** Ensures no memory leaks by properly managing allocated space.

## 🛠️ Technologies
- **Language:** C
- **Concepts:** File Descriptors, Static Variables, Memory Allocation, Buffer Management.

## ⚙️ Compilation & Integration

### 1. Integration
To use `get_next_line` in your project, include the header in your C files:
```c
#include "get_next_line.h"
```

### 2. Compilation
Compile your code along with the GNL files, defining the `BUFFER_SIZE`:
```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 main.c get_next_line.c get_next_line_utils.c -o gnl_test
```

## 🧠 What I Learned
- **Static Variables:** How to preserve data between function calls without using global variables.
- **File Descriptors:** Deepening the understanding of how the system handles file reading.
- **Buffer Optimization:** Managing read operations efficiently by handling the remaining data from previous reads.

---
*Developed as part of my Software Engineering journey at **42 Lisboa** (April 2025 intake).*
