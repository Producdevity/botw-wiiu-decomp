struct ThreadAllocatorContext;
extern "C" ThreadAllocatorContext** fn_0434d168(void *);
extern "C" unsigned char data_1045cc14[];

namespace {
struct Allocator {
    void **vtable;
};

struct ThreadContext {
    char padding_0[0x28];
    Allocator *allocator;
};
}

extern "C" void fn_040dee88(int first, int count) {
    ThreadContext *context = reinterpret_cast<ThreadContext *>(*fn_0434d168(data_1045cc14));
    Allocator *allocator = context->allocator;

    ((int (*)(Allocator *, int, int))allocator->vtable[7])(allocator, first, count * 4);
}
