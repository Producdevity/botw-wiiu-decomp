typedef int s32;

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

extern "C" void fn_040dee88(s32 arg0, s32 count) {
    ThreadContext *context = (ThreadContext *)*fn_0434d168(data_1045cc14);
    Allocator *allocator = context->allocator;

    ((s32 (*)(Allocator *, s32, s32))allocator->vtable[7])(allocator, arg0, count * 4);
}
