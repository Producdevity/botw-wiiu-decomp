typedef int s32;

struct ListLink;
extern "C" void fn_0308e808(ListLink *);
extern "C" int fn_0308e978(void*, int);
extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" void fn_03be1d4c(void *arg0, void *arg1) {
    void *temp_r29;

    if (arg1 != 0) {
        temp_r29 = (char *)arg0 + 0x7C;
        fn_030bb668(temp_r29);
        if (fn_0308e978((char *)arg0 + 0x6C, (s32) ((char *)arg1 + (*(s32 *)((char *)(arg0) + (0x78))))) >= 0) {
            fn_0308e808((ListLink *)((char *)arg1 + (*(s32 *)((char *)(arg0) + (0x78)))));
            (*(s32 *)((char *)(arg0) + (0x74))) = (s32) ((*(s32 *)((char *)(arg0) + (0x74))) - 1);
        }
        fn_030bb69c(temp_r29);
    }
}
