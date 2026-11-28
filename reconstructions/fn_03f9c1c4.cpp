struct ThreadAllocatorContext;
extern "C" ThreadAllocatorContext** fn_0434d168(void *);
extern "C" unsigned char data_1045cc14[];

namespace {
struct Allocator {
    void* const* vtable;
};

struct ThreadContext {
    char padding_0[0x2C];
    Allocator *allocator;
};
}

extern "C" void fn_03f9c1c4(int object) {
    ThreadContext *context;
    Allocator *allocator;

    if (object == 0) {
        context = reinterpret_cast<ThreadContext *>(*fn_0434d168(data_1045cc14));
        allocator = context->allocator;
        ((int (*)(Allocator *, int))allocator->vtable[5])(allocator, 4);
    }
}
