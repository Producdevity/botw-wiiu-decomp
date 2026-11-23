typedef int s32;

extern "C" void fn_0308e6d0(void *);
struct MutexOwner;
extern "C" void fn_030bb7f8(MutexOwner *);

extern "C" void fn_034d69e4(void *arg0, s32 arg1) {
    s32 temp_r12;

    if (arg0 != 0) {
        temp_r12 = (*(s32 *)((char *)(arg0) + (4)));
        if (temp_r12 != 0) {
            fn_030bb7f8((MutexOwner *)(temp_r12 + 8));
        }
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
