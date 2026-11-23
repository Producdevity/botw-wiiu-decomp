typedef int s32;

struct ListLink;
extern "C" void fn_0308e7e8(ListLink *, ListLink *);
extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" void fn_0359690c(void *arg0, s32 arg1) {
    void *temp_r12;
    void *temp_r29;

    if (arg1 != 0) {
        temp_r12 = (void *)(arg1 + (*(s32 *)((char *)(arg0) + (0x10))));
        if (((s32) (*(s32 *)((char *)(temp_r12) + (4))) == 0) && ((s32) (*(s32 *)((char *)(temp_r12) + (0))) == 0)) {
            temp_r29 = (char *)arg0 + 0x14;
            fn_030bb668(temp_r29);
            fn_0308e7e8((ListLink *)((char *)arg0 + 4), (ListLink *)(arg1 + (*(s32 *)((char *)(arg0) + (0x10)))));
            (*(s32 *)((char *)(arg0) + (0xC))) = (s32) ((*(s32 *)((char *)(arg0) + (0xC))) + 1);
            fn_030bb69c(temp_r29);
        }
    }
}
