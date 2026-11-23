typedef int s32;

struct ListLink;
extern "C" void fn_0308e808(ListLink *);
extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" void fn_0359699c(void *arg0, void *arg1) {
    void *temp_r12;
    void *temp_r29;

    if ((arg1 != 0) && ((temp_r12 = (char *)arg1 + (*(s32 *)((char *)(arg0) + (0x10))), (((s32) (*(s32 *)((char *)(temp_r12) + (4))) == 0) == 0)) || ((s32) (*(s32 *)((char *)(temp_r12) + (0))) != 0))) {
        temp_r29 = (char *)arg0 + 0x14;
        fn_030bb668(temp_r29);
        fn_0308e808((ListLink *)((char *)arg1 + (*(s32 *)((char *)(arg0) + (0x10)))));
        (*(s32 *)((char *)(arg0) + (0xC))) = (s32) ((*(s32 *)((char *)(arg0) + (0xC))) - 1);
        fn_030bb69c(temp_r29);
    }
}
