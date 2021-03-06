#ifndef VM_SWAP_H
#define VM_SWAP_H

#include <stdint.h>

typedef uint32_t swap_slot_t;

void swap_init (void);
swap_slot_t swap_store (void *kpage);
void swap_load (void *kpage, swap_slot_t swap_slot);
void swap_free (swap_slot_t swap_slot);

#endif /* vm/swap.h */
