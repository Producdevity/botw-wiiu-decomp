typedef int s32;

extern "C" int fn_02e18d04(void*);
extern "C" int fn_02ebc4d0(void*, void*);
extern "C" void* data_10469978;

extern "C" s32 fn_02a63000(void) {
    void *next_index = (void *)(fn_02e18d04(0) + 1);
    if ((data_10469978 != 0) && (fn_02ebc4d0(data_10469978, next_index) != 0)) {
        return 1;
    }
    return 0;
}
