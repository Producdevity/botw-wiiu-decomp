typedef int s32;

extern "C" void fn_0308e6d0(void *);
struct Object;
extern "C" void fn_03a8490c(Object *);

extern "C" s32 data_10362b50;

extern "C" void fn_03a84994(struct Object *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0x158))) = &data_10362b50;
        fn_03a8490c(arg0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
