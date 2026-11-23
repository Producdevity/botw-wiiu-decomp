typedef int s32;

extern "C" void fn_0308e6d0(void *);
struct OwnedBuffer;
extern "C" void fn_0308ead0(OwnedBuffer *);

extern "C" void fn_0313f2dc(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_0308ead0((OwnedBuffer *)((char *)arg0 + 0x34));
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
