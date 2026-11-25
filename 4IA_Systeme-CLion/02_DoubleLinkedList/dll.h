// Created by fabian on 10/13/26.
#ifndef DLL_H
#define DLL_H
#include <stdint.h>

typedef struct dll_e
{
    double data;
    struct dll_e *next;
    struct dll_e *prev;
} dll_e_t;

typedef struct dll_ptr
{
    dll_e_t *head;
    dll_e_t *tail;
    uint32_t size;
} dll_ptr_t;

void dll_push(dll_ptr_t *list, double data);
int dll_pop(dll_ptr_t *list, double *ret);
void dll_pushBack(dll_ptr_t *list, double data);
int dll_popBack(dll_ptr_t *list, double *ret);
int dll_addAt(dll_ptr_t *list, double data, uint32_t index);
int dll_removeAt(dll_ptr_t *list, uint32_t index);
void dll_clear(dll_ptr_t *list);
int dll_getAt(const dll_ptr_t *list, uint32_t index, double *ret);
int dll_setAt(dll_ptr_t *list, double data, uint32_t index);
int32_t dll_search(const dll_ptr_t *list, double data);
double *dll_export(const dll_ptr_t *list, uint32_t *size);
#endif
