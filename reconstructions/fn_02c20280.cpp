typedef int s32;

extern "C" int fn_0434b1e0(void*);
extern "C" int fn_0434b258(int);

extern "C" s32 fn_02c20280(s32 handle) {
    s32 result = 0;

    if (handle != 0 && fn_0434b258(handle) != 1) {
        result = fn_0434b1e0((void *) handle);
    }
    return result;
}
