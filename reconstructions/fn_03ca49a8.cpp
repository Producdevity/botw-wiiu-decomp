typedef int s32;

extern "C" void fn_03c92f98(void*);
extern "C" void fn_03ca4718(void*);
extern "C" void fn_0434bda8(void*, void*);

namespace {
struct Object {
    char padding_0[4];
    void *heap;
    char padding_8[0x30 - 8];
    void *block;
};
}

extern "C" s32 fn_03ca49a8(void *object) {
    Object *self = (Object *)object;

    void *block = self->block;
    if (block != 0) {
        fn_0434bda8(self->heap, block);
        self->block = 0;
    }
    fn_03c92f98(object);
    fn_03ca4718(object);
    return 0;
}
