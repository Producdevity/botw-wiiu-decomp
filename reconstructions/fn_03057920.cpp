typedef unsigned char u8;
typedef int s32;

extern "C" void fn_030578e0(void*);
extern "C" int fn_03060e78(void*, void*);

extern "C" void fn_03057920(void *arg0, void *arg1) {
    if (((s32) (*(u8 *)((char *)(arg0) + (0x40CAC))) != 0) && (fn_03060e78((char *)arg0 + 0x40C94, arg1) != 0)) {
        fn_030578e0(arg0);
    }
}
