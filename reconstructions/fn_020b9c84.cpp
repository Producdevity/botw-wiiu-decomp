typedef int s32;

extern "C" int fn_020b89e8(void*);
extern "C" void fn_020b9610(void*);
extern "C" void fn_020b9920(void*);
extern "C" void fn_020b9a68(void*);

extern "C" void fn_020b9c84(void *arg0) {
    (*(s32 *)((char *)(arg0) + (0x278))) = (s32) ((*(s32 *)((char *)(arg0) + (0x278))) & 0xFFFFFF7F);
    if (fn_020b89e8(arg0) != 0) {
        fn_020b9610(arg0);
        fn_020b9920(arg0);
        fn_020b9a68(arg0);
    }
}
