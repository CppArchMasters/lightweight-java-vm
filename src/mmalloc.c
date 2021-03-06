#include "mmalloc.h"

static free_block free_block_list_head = { 0, 0 };
static const size_t overhead = sizeof(size_t);
static const size_t align_to = 16;

void* mmalloc(size_t size) {
    size = (size + sizeof(size_t) + (align_to - 1)) & ~ (align_to - 1);
    free_block* block = free_block_list_head.next;
    free_block** head = &(free_block_list_head.next);
    while (block != 0) {
        if (block->size >= size) {
            *head = block->next;
            return ((char*)block) + sizeof(size_t);
        }
        head = &(block->next);
        block = block->next;
    }

    block = (free_block*)alloc(size);
    block->size = size;

    return ((char*)block) + sizeof(size_t);
}

void mmemcpy(void * target, void * source, int bytecount) {

}

int mmemcmp(void * const source, void * const end, int elem_size) {
    return 1;
}

void * mcalloc(size_t size) {
    void * ptr = NULL;
    return ptr;
}

void mfree(void* ptr) {
    free_block* block = (free_block*)(((char*)ptr) - sizeof(size_t));
    block->next = free_block_list_head.next;
    free_block_list_head.next = block;
}
