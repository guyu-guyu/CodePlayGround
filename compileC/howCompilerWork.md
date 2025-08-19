# How Compiler Work

gcc -E main.c -o main.i
预处理，将main.c源文件预处理，输出main.i文件

gcc -S main.i -o main.s
编译，将main.i编译成为汇编文件输出main.s

gcc -c main.s -o main.o
汇编，将汇编文件main.s汇编为二进制.o文件，输出main.o

gcc main.o -o main
链接，将.o文件链接输出可执行文件main，这里只有一个文件，实际并不需要链接
