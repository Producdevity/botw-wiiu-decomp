typedef int s32;

extern "C" void fn_0308e6d0(void *);
struct OwnedBuffer;
extern "C" void fn_0308ead0(OwnedBuffer *);

extern "C" s32 data_1021837c;

extern "C" void fn_02e834f8(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0x74))) = &data_1021837c;
        fn_0308ead0((OwnedBuffer *)((char *)arg0 + 0x2C));
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
