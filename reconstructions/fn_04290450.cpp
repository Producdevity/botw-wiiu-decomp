typedef int s32;

namespace {
struct Allocator {
    void **vtable;
};

struct AllocatorContext {
    char padding_0[0x2C];
    Allocator *allocator;
};

struct Object {
    char padding_0[4];
    s32 value;
};
}

struct ThreadAllocatorContext;
extern "C" ThreadAllocatorContext** fn_0434d168(void *);
extern "C" unsigned char data_1045cc14[];

extern "C" void fn_04290450(void *self) {
    Object *object = (Object *)self;
    Allocator *allocator;
    if (object != 0 || (allocator = (*(AllocatorContext **)fn_0434d168(data_1045cc14))->allocator, object = (Object *)((void *(*)(Allocator *, s32))allocator->vtable[5])(allocator, 8), object != 0)) {
        object->value = 0;
    }
}
