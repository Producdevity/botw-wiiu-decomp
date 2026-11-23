typedef int s32;

extern "C" int fn_03177824(void*, void*);

extern "C" s32 fn_027327b8(s32 arg0, void *arg1) {
    s32 temp_r31;

    temp_r31 = fn_03177824((void *)(arg0 + 0x84), arg1) & 1;
    return temp_r31 & fn_03177824((void *)(arg0 + 0x10C), arg1);
}
