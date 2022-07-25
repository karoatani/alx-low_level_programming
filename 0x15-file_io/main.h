#ifndef _MAIN_
#define _MAIN_
#include <stdio.h>
#include <stddef.h>
#include <sys/types.h>
#include<stdio.h> 
#include<fcntl.h> 
#include<errno.h>
#include <stdlib.h>
ssize_t read_textfile(const char *filename, size_t letters);
#endif
