#ifndef MAIN_H
#define MAIN_H
<<<<<<< HEAD
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
=======
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

>>>>>>> 9755594d893c032bc0642931c46665693ed70382
#endif
