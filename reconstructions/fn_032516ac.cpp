typedef int s32;
typedef unsigned int u32;

extern "C" void* fn_0434c000(void *, int, unsigned);

extern "C" s32 fn_032516ac(void *arg0) {
    void *temp_r3;

    if (((s32) (*(s32 *)((char *)(arg0) + (0x1C))) != 0) || (temp_r3 = (*(void **)((char *)(arg0) + (0xA70))), ((temp_r3 == 0) != 0))) {
        return 0;
    }
    fn_0434c000(temp_r3, 0, (*(u32 *)((char *)(arg0) + (0x924))));
    return 1;
}
