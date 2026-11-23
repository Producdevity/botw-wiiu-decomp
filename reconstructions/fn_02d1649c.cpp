typedef int s32;

extern "C" void fn_02d0a544(void*, void*, void*);
extern "C" int fn_02d149a0(void*);

extern "C" s32 data_101e07f0;

extern "C" s32 fn_02d1649c(void *arg0) {
    if (fn_02d149a0(arg0) == 0) {
        fn_02d0a544(arg0, &data_101e07f0, 0);
    }
    return 1;
}
