typedef unsigned char u8;
typedef int s32;

struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);
extern "C" int fn_0378c7b0(void*);
extern "C" void fn_0378c840(void*);

extern "C" void fn_0250bc7c(void *arg0) {
    if (fn_0378c7b0((char *)arg0 + 0x2C) != 0) {
        fn_0378c840((char *)arg0 + 0x2C);
    }
    if (((s32) (*(s32 *)((char *)(arg0) + (0x2C))) != 0) || ((s32) (*(u8 *)((char *)(arg0) + (0x30))) != 0)) {
        fn_0378c734((ProcLink *)((char *)arg0 + 0x2C));
    }
}
