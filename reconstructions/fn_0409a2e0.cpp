typedef int s32;

namespace {
struct Allocator {
    void *const *vtable;
};

struct Context {
    unsigned char padding_0[0x2C];
    Allocator *allocator;
};
}

struct ThreadAllocatorContext;
extern "C" ThreadAllocatorContext** fn_0434d168(void *);
extern "C" unsigned char data_1045cc14[];

extern "C" void fn_0409a2e0(void) {
    Context *context = (Context *)*fn_0434d168(data_1045cc14);
    Allocator *allocator = context->allocator;
    ((s32 (*)(Allocator *, s32))allocator->vtable[5])(allocator, 0x10);
}
