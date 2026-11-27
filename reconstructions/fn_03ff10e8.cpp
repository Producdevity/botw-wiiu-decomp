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
    Allocator* allocator = ((ThreadAllocatorContext_*) *fn_0434d168(data_1045cc14))->allocator;
    return allocator->vtable->allocate(allocator, size);
}
}
extern "C" int data_104008c8;

extern "C" void fn_03ff10e8(int** arg0) {
    int** value = arg0;
    if (value == 0) {
        value = (int**) allocateFromThread(0xC);
    }
    if (value != 0) {
        *value = &data_104008c8;
    }
}
