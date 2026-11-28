struct ThreadAllocatorContext;
extern "C" ThreadAllocatorContext** fn_0434d168(void *);
extern "C" unsigned char data_1045cc14[];

namespace {
struct Allocator;
struct AllocatorVtable {
    unsigned char padding_0[0x14];
    void* (*allocate)(Allocator*, int size);
};
struct Allocator {
    AllocatorVtable* vtable;
};
struct ThreadAllocatorContext_ {
    unsigned char padding_0[0x2C];
    Allocator* allocator;
};
inline void* allocateFromThread(int size) {
    Allocator* allocator = reinterpret_cast<ThreadAllocatorContext_*>(*fn_0434d168(data_1045cc14))->allocator;
    return allocator->vtable->allocate(allocator, size);
}
}
extern "C" int data_103fe9ec;
extern "C" void fn_03f99d2c(int** memory) {
    int** object = memory;
    if (object == 0) {
        object = (int**) allocateFromThread(4);
    }
    if (object != 0) {
        *object = &data_103fe9ec;
    }
}
