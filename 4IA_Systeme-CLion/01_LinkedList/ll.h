#ifndef LL_H
#define LL_H

#include <stdint.h>

typedef struct ll {
    double data;
    struct ll *next;
} ll_t;

void ll_push(ll_t **list, double data);
int ll_pop(ll_t **list, double *ret);

void ll_pushBack(ll_t **list, double data);
int ll_popBack(ll_t **list, double *ret);

int ll_addAt(ll_t **list, double data, uint32_t index);
int ll_removeAt(ll_t **list, uint32_t index);
void ll_clear(ll_t **list);
int ll_getAt(ll_t **list, uint32_t index, double *ret);
int ll_setAt(ll_t **list, double data, uint32_t index);

// Suche: Index des ersten Treffers, -1 falls nicht gefunden.
int32_t ll_search(const ll_t *list, double data);
// Export: malloc-Array in Listenreihenfolge; *size wird gesetzt. Mit free freigeben.
double *ll_export(const ll_t *list, uint32_t *size);

#endif
