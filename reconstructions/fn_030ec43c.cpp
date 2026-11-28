typedef int s32;

extern "C" void* fn_030ec10c(void *, const void *, unsigned, bool);

extern "C" s32 fn_030ec43c(void *object, s32 value, void *key) {
    s32 *slot = (s32 *)fn_030ec10c(object, key, 0xAU, 1U);
    if (slot != 0) {
        *slot = value;
        return 1;
    }
    return 0;
}
