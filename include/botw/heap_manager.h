#ifndef BOTW_HEAP_MANAGER_H
#define BOTW_HEAP_MANAGER_H

// Global heap manager; the word at +4 is the heap used when the calling
// thread has no registered current heap.
struct HeapManager {
    unsigned char unknown[4];
    void* defaultHeap;
};

extern "C" HeapManager* data_1046c8b0;

extern "C" void* fn_030a9eb8(HeapManager* manager, const void* address);
extern "C" void* fn_030aa1ac(HeapManager* manager);

// Object registered with its owning heap for destruction: heap, list links,
// then the GHS vtable pointer.
struct Disposer {
    void* heap;
    void* prev;
    void* next;
    const void* vtable;
};
typedef char DisposerSize[sizeof(Disposer) == 16 ? 1 : -1];

extern "C" const unsigned char data_10260c74[];

extern "C" void fn_030a9944(void* heap, Disposer* disposer);
extern "C" Disposer* fn_030a594c(Disposer* storage);
extern "C" Disposer* fn_030a59d4(Disposer* storage, void* heap, int heapNullOption);

#endif
