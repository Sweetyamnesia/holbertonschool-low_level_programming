#ifndef MAIN_H
#define MAIN_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct type_handler - structure to map type and printing function
 * @type: character that defines the argument type
 * @print: function pointer to handle printing
 */
typedef struct type_handler
{
	char type;
	void (*print)(va_list args);
} type_handler_t;

void print_all(const char * const format, ...);

#endif
