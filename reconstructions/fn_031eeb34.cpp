typedef int s32;

struct OwnedBuffer;
extern "C" void fn_0308ead0(OwnedBuffer *);

extern "C" void fn_031eeb34(void *arg0) {
    if ((s32) (*(s32 *)((char *)(arg0) + (0xC))) != 0) {
        fn_0308ead0((OwnedBuffer *)((char *)arg0 + 4));
    }
    if ((s32) (*(s32 *)((char *)(arg0) + (0x18))) != 0) {
        fn_0308ead0((OwnedBuffer *)((char *)arg0 + 0x10));
    }
}
