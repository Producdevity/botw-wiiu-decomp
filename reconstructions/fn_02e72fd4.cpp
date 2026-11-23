typedef int s32;

extern "C" void fn_0308e6d0(void *);
struct OwnedBuffer;
extern "C" void fn_0308ead0(OwnedBuffer *);

extern "C" s32 data_10217b18;

extern "C" void fn_02e72fd4(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0x68))) = &data_10217b18;
        fn_0308ead0((OwnedBuffer *)((char *)arg0 + 4));
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
