#include <stdio.h>
// option 1. Specific struct for everything we want.
struct int_list_s		{int n; struct int_list_s * next;};
struct float_list_s		{float z; struct float_list_s *next;};
struct string_list_s	{char * str; struct string_list_s * next};

typedef struct int_list_s int_list_t;
typedef struct float_list_s float_list_t;
typedef struct string_list_s string_list_t;

int_list_t * int_list_new(int n);
float_list_t * float_list_new(float n);
string_list_t * string_list_new(char const * str);

void int_list_delete(int_list_t ** list);
void float_list_delete(float_list_t ** list);
void string_list_delete(string_list_t ** list);

// Option 2. Have void * most generic type for everything.
// You may have to unreference inorder to get the value of content.
// This is will slow your program if it is done somany times.
struct list_s {
	void * content;
	size_t size;
	struct list_s * next;
};

typedef struct list_s list_t;

list_t * list_new( void * content, size_t size);
void list_delete(list_t ** list);

int main( void ) {
	return (0);
}