typedef int s32;

struct ThreadAllocatorContext;
extern "C" ThreadAllocatorContext** fn_0434d168(void *);
extern "C" unsigned char data_1045cc14[];

namespace {
struct Allocator {
    void* const* vtable;
};
struct Context {
    char padding_0[0x2C];
    Allocator *allocator;
};
}

extern "C" void fn_0429003c(s32 arg0) {
    Context *context;
    Allocator *allocator;

    if (arg0 == 0) {
        context = (Context *)*fn_0434d168(data_1045cc14);
        allocator = context->allocator;
        ((s32 (*)(Allocator *, s32))allocator->vtable[5])(allocator, 0x10);
    }
}
