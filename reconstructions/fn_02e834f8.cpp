typedef int s32;
extern "C" void fn_0308e6d0(void *);
struct OwnedBuffer;
extern "C" void fn_0308ead0(OwnedBuffer *);
extern "C" s32 data_1021837c;

namespace {
struct Object {
    char padding_0[0x74];
    s32 *vtable;
};
}

extern "C" void fn_02e834f8(void *object, s32 flags) {
    if (object != 0) {
        ((Object *)object)->vtable = &data_1021837c;
        fn_0308ead0((OwnedBuffer *)((char *)object + 0x2C));
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
