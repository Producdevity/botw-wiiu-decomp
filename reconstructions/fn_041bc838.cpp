typedef int s32;
typedef float f32;

struct ThreadAllocatorContext;
extern "C" ThreadAllocatorContext** fn_0434d168(void *);
extern "C" unsigned char data_1045cc14[];

extern "C" f32 data_104116d4;

namespace {
struct Heap;

typedef f32 *(*AllocateFn)(Heap *, s32);

struct HeapVTable {
    unsigned char padding_0[20];
    AllocateFn allocate;
};

struct Heap {
    HeapVTable *vtable;
};

struct Context {
    unsigned char padding_0[0x2C];
    Heap *heap;
};
}

extern "C" void fn_041bc838(f32 *value) {
    f32 *result;
    Heap *heap;

    result = value;
    if ((result != 0) || (heap = ((Context *)*fn_0434d168(data_1045cc14))->heap, result = heap->vtable->allocate(heap, 4), ((result == 0) == 0))) {
        *result = data_104116d4;
    }
}
