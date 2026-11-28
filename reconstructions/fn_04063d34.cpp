typedef int s32;

extern "C" void fn_0405b640(void*, void*);
struct ThreadAllocatorContext;
extern "C" ThreadAllocatorContext** fn_0434d168(void *);
extern "C" unsigned char data_1045cc14[];

extern "C" s32 data_10407574;

namespace {
struct Allocator {
    void *const *vtable;
};

struct Context {
    char padding_0[0x2C];
    Allocator *allocator;
};

typedef s32 **(*AllocateFn)(Allocator *, s32);
}

extern "C" s32 **fn_04063d34(s32 **memory, s32 *source) {
    s32 **object = memory;
    s32 value = *source;
    if (object == 0) {
        Allocator *allocator = ((Context *)*fn_0434d168(data_1045cc14))->allocator;
        object = ((AllocateFn)allocator->vtable[5])(allocator, 0x10);
    }
    if (object != 0) {
        s32 argument = value;
        fn_0405b640(object, &argument);
        *object = &data_10407574;
    }
    return object;
}
