typedef int s32;

extern "C" int fn_0317780c(void*);

extern "C" s32 fn_02733c98(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_0317780c((void *)(arg0 + 0x84)) & 1;
    return temp_r31 & fn_0317780c((void *)(arg0 + 0x10C));
}
