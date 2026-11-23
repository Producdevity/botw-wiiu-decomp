typedef int s32;

extern "C" void fn_03f92140(void *);
extern "C" void fn_03f92680(void*);
struct ThreadAllocatorContext;
extern "C" ThreadAllocatorContext** fn_0434d168(void *);
extern "C" unsigned char data_1045cc14[];

extern "C" s32 data_1045cc1c;

extern "C" s32 fn_03f76d98(void) {
    struct ThreadAllocatorContext *temp_r3;

    temp_r3 = *fn_0434d168(&data_1045cc1c);
    if (temp_r3 != 0) {
        fn_03f92680(temp_r3);
    }
    if ((struct ThreadAllocatorContext *) *fn_0434d168(data_1045cc14) != 0) {
        fn_03f92140(0);
    }
    return 0;
}
