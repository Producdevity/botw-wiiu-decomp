typedef int s32;

extern "C" void fn_03edc01c(void*, void*);
struct ThreadAllocatorContext;
extern "C" ThreadAllocatorContext** fn_0434d168(void *);
extern "C" unsigned char data_1045cc14[];

extern "C" s32 data_103fbee4;

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

extern "C" s32 **fn_03f6ed50(s32 **memory, s32 *source) {
    s32 **object = memory;
    s32 value = *source;
    if (object == 0) {
        Allocator *allocator = ((Context *)*fn_0434d168(data_1045cc14))->allocator;
        object = ((AllocateFn)allocator->vtable[5])(allocator, 0xa0);
    }
    if (object != 0) {
        s32 argument = value;
        fn_03edc01c(object, &argument);
        *object = &data_103fbee4;
    }
    return object;
}
