typedef int s32;
typedef unsigned int u32;

extern "C" void fn_03712a24(void *);
extern "C" int fn_03798754(void*);
extern "C" void fn_03985370(void*);

extern "C" void fn_037ad614(void *arg0) {
    s32 temp_r3;

    if (!(((u32) (*(u32 *)((char *)(arg0) + (0x60))) >> 1U) & 1)) {
        temp_r3 = fn_03798754(arg0);
        if (temp_r3 != 0) {
            fn_03712a24((void *) temp_r3);
        }
        fn_03985370((*(void **)((char *)(arg0) + (0x330))));
    }
}
