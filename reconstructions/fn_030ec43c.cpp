typedef int s32;

extern "C" void* fn_030ec10c(void *, const void *, unsigned, bool);

extern "C" s32 fn_030ec43c(void *arg0, s32 arg1, void *arg2) {
    s32 *temp_r3;

    temp_r3 = (s32 *)(fn_030ec10c(arg0, arg2, 0xAU, 1U));
    if (temp_r3 != 0) {
        *temp_r3 = arg1;
        return 1;
    }
    return 0;
}
