typedef int s32;

extern "C" int fn_0322df7c(void*);
extern "C" void fn_03251548(void*, void*);
extern "C" int fn_03251690(int);

extern "C" s32 data_1046d618;

extern "C" void fn_03201fac(void *arg0) {
    s32 temp_r3;

    temp_r3 = fn_0322df7c((*(void **)((char *)(arg0) + (0x724))));
    if ((temp_r3 != 0) && (fn_03251690(data_1046d618) != 0)) {
        fn_03251548((void *) data_1046d618, (void *) temp_r3);
    }
}
