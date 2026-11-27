typedef int s32;

extern "C" int fn_02ebc36c(void*);
extern "C" void* data_10469978;

extern "C" s32 fn_02a8a7d0(void) {
    int count = 0;
    if (data_10469978 != 0) {
        count = fn_02ebc36c(data_10469978);
    }
    return count > 0;
}
