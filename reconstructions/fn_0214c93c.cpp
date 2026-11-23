typedef unsigned char u8;
typedef int s32;

extern "C" void fn_03479bc8(void*, void*);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);

extern "C" void *data_1046fe50;

extern "C" void fn_0214c93c(void *arg0) {
    void *temp_r4;

    if (((s32) (*(s32 *)((char *)(arg0) + (0x140))) != 0) || ((s32) (*(u8 *)((char *)(arg0) + (0x144))) != 0)) {
        fn_0378c734((ProcLink *)((char *)arg0 + 0x140));
    }
    temp_r4 = (*(void **)((char *)(arg0) + (0x148)));
    if (temp_r4 != 0) {
        fn_03479bc8(data_1046fe50, temp_r4);
    }
}
