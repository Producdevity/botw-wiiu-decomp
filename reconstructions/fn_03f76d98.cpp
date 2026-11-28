extern "C" void fn_03f92140(void *);
extern "C" void fn_03f92680(void*);
struct ThreadAllocatorContext;
extern "C" ThreadAllocatorContext** fn_0434d168(void *);
extern "C" unsigned char data_1045cc14[];

extern "C" int data_1045cc1c;

extern "C" int fn_03f76d98(void) {
    ThreadAllocatorContext *context = *fn_0434d168(&data_1045cc1c);
    if (context != 0) {
        fn_03f92680(context);
    }
    if (*fn_0434d168(data_1045cc14) != 0) {
        fn_03f92140(0);
    }
    return 0;
}
