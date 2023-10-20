#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>
#include <sys/types.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef struct handle_s
{
    char *input;
    FILE *filestream;
    char *container;
    int desider;
}handle_t;

extern handle_t handle;

void push(stack_t **top, unsigned int number);
void pall(stack_t **top, unsigned int number);
void addnode(stack_t **top, unsigned int value);
void pint(stack_t **top, unsigned int number);
void pop(stack_t **top, unsigned int number);
void stack_free(stack_t *top);
int main(int argc, char *argv[]);
int execute(char *container, stack_t **top, unsigned int number, FILE *filestream);
void swap(stack_t **top, unsigned int number);
#endif