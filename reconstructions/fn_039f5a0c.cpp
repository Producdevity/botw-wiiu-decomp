typedef int s32;

extern "C" void fn_0308e6d0(void *);
struct OwnedBuffer;
extern "C" void fn_0308ead0(OwnedBuffer *);

extern "C" s32 data_1035439c;

extern "C" void fn_039f5a0c(s32 **object, s32 flags) {
    if (object != 0) {
        *object = &data_1035439c;
        fn_0308ead0((OwnedBuffer *) (object + 2));
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
