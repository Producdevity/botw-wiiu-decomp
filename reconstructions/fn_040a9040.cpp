struct ThreadAllocatorContext;
extern "C" ThreadAllocatorContext** fn_0434d168(void *);
extern "C" unsigned char data_1045cc14[];

namespace {
struct Allocator {
    void **vtable;
};

struct ThreadContext {
    char padding_0[0x2C];
    Allocator *allocator;
};
}

extern "C" void fn_040a9040(int first, int count) {
    ThreadContext *context = reinterpret_cast<ThreadContext *>(*fn_0434d168(data_1045cc14));
    Allocator *allocator = context->allocator;

    ((int (*)(Allocator *, int, int))allocator->vtable[7])(allocator, first, count << 5);
}
