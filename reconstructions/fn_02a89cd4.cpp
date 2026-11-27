typedef int s32;

extern "C" int fn_02ebc418(void*);
extern "C" void* data_10469978;

extern "C" s32 fn_02a89cd4(void) {
    s32 count = 0;

    if (data_10469978 != 0) {
        count = fn_02ebc418(data_10469978);
    }
    return count > 0;
}
