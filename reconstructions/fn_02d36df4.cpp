typedef int s32;
typedef unsigned int u32;

extern "C" int fn_024b3850(void*);

extern "C" s32 fn_02d36df4(void *arg0) {
    u32 temp_r3;

    temp_r3 = fn_024b3850(arg0);
    switch (temp_r3) {
    case 3:
        return 2;
    case 4:
        return 1;
    default:
        return 0;
    }
}
