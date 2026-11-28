typedef int s32;

extern "C" void fn_0359bb54(void*, void*, void*);

extern "C" s32 data_1004e1c0;

extern "C" void fn_021efa54(void **object) {
    struct { s32 first; s32 second; } args;
    void *target = *object;
    if (target != 0) {
        args.first = 0;
        args.second = 0;
        fn_0359bb54(target, &data_1004e1c0, &args);
    }
}
