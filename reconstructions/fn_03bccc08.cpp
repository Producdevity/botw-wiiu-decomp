typedef int s32;

struct ListLink;
extern "C" void fn_0308e7e8(ListLink *, ListLink *);
extern "C" void fn_03bcb110(void*);

extern "C" void fn_03bccc08(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        fn_0308e7e8((ListLink *)((char *)arg0 + 0x44), (ListLink *)(arg1 + (*(s32 *)((char *)(arg0) + (0x50)))));
        (*(s32 *)((char *)(arg0) + (0x4C))) = (s32) ((*(s32 *)((char *)(arg0) + (0x4C))) + 1);
        fn_03bcb110(arg0);
    }
}
