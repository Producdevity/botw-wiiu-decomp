typedef unsigned char u8;
typedef int s32;

extern "C" void fn_023d7618(void*);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);

extern "C" void fn_023d8638(void *arg0) {
    fn_023d7618(arg0);
    if (((s32) (*(s32 *)((char *)(arg0) + (0x90))) != 0) || ((s32) (*(u8 *)((char *)(arg0) + (0x94))) != 0)) {
        fn_0378c734((ProcLink *)((char *)arg0 + 0x90));
    }
}
