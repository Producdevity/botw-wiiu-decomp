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

extern "C" void fn_03f92340(s32 address, s32 size) {
    Context *context = (Context *)*fn_0434d168(data_1045cc14);
    Allocator *allocator = context->allocator;
    ((s32 (*)(Allocator *, s32, s32))allocator->vtable[7])(allocator, address, size);
}
