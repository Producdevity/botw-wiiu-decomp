typedef int s32;

extern "C" void fn_0308e6d0(void *);
struct OwnedBuffer;
extern "C" void fn_0308ead0(OwnedBuffer *);

extern "C" s32 data_1035439c;

extern "C" void fn_039f5a0c(s32 **arg0, s32 arg1) {
    if (arg0 != 0) {
        *arg0 = &data_1035439c;
        fn_0308ead0((OwnedBuffer *)((char *)arg0 + 8));
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
