typedef int s32;

extern "C" int fn_0307a22c(void*);
extern "C" void fn_0307a4cc(void*);

extern "C" s32 fn_0307a924(void *handle) {
    s32 id;

    if (handle == (void *)-1) {
        return 0;
    }
    id = fn_0307a22c(handle);
    if (id == -1) {
        return 0;
    }
    fn_0307a4cc((void *) id);
    return 1;
}
