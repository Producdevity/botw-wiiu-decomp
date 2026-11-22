struct ThreadAllocator {
    void* const* vtable;
};

struct ThreadAllocatorContext {
    unsigned char unknown[0x2c];
    ThreadAllocator* allocator;
};

typedef void* (*ThreadAllocateFn)(ThreadAllocator* allocator, unsigned size);

extern "C" unsigned char data_1045cc14[];
extern "C" ThreadAllocatorContext** fn_0434d168(void* index);

extern "C" void* fn_03f922f0(unsigned size) {
    ThreadAllocator* allocator = (*fn_0434d168(data_1045cc14))->allocator;
    return reinterpret_cast<ThreadAllocateFn>(allocator->vtable[5])(allocator, size);
}
