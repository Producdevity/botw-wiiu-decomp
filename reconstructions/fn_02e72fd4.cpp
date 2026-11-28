typedef int s32;

extern "C" void fn_0308e6d0(void *);
struct OwnedBuffer;
extern "C" void fn_0308ead0(OwnedBuffer *);

extern "C" s32 data_10217b18;

namespace {
struct Layout {
    char padding_0[0x68];
    s32 *vtable;
};
}

extern "C" void fn_02e72fd4(void *object, s32 flags) {
    if (object != 0) {
        ((Layout *) object)->vtable = &data_10217b18;
        fn_0308ead0((OwnedBuffer *)((char *)object + 4));
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
