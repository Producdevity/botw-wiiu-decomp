typedef int s32;

extern "C" void* fn_030ec10c(void *, const void *, unsigned, bool);

extern "C" s32 fn_030ec43c(void *arg0, s32 value, void *arg2) {
    s32 *slot = (s32 *)fn_030ec10c(arg0, arg2, 0xAU, 1U);
    if (slot != 0) {
        *slot = value;
        return 1;
    }
    return 0;
}
