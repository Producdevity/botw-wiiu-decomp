typedef int s32;

struct ListLink;
extern "C" void fn_0308e7e8(ListLink *, ListLink *);
extern "C" void fn_03bcb110(void*);

extern "C" void fn_03bcb1f0(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        fn_0308e7e8((ListLink *)((char *)arg0 + 0x1C), (ListLink *)(arg1 + (*(s32 *)((char *)(arg0) + (0x28)))));
        (*(s32 *)((char *)(arg0) + (0x24))) = (s32) ((*(s32 *)((char *)(arg0) + (0x24))) + 1);
        fn_03bcb110(arg0);
    }
}
