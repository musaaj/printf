#ifndef PRINT_H
#define PRINT_H
#ifndef EOF
#define EOF '\0'
#endif
#ifndef NULL
#define NULL (void *)0
#endif
int numlen(long int n);
char *intstr(long int n);
int _putchar(int);
int putnum(char *);
int _puts(char*);
int _printf(const char *format, ...);
#endif
