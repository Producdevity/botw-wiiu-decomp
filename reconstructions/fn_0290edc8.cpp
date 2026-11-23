typedef unsigned char u8;
typedef int s32;

extern "C" void fn_0290c340(int);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);

extern "C" void fn_0290edc8(void *arg0) {
    if (((s32) (*(s32 *)((char *)(arg0) + (0x50))) != 0) || ((s32) (*(u8 *)((char *)(arg0) + (0x54))) != 0)) {
        fn_0378c734((ProcLink *)((char *)arg0 + 0x50));
    }
    fn_0290c340((s32) arg0);
}
