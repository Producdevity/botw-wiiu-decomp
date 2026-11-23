typedef int s32;

extern "C" void* fn_03510f04(void *, void *);
extern "C" void* fn_0354ed84(void *, const void *);

extern "C" s32 data_10555f40;

extern "C" void fn_0353296c(void *arg0) {
    void *temp_r3;

    temp_r3 = fn_0354ed84((char *)arg0 + 0xC, &data_10555f40);
    (*(void **)((char *)(arg0) + (0x17C))) = temp_r3;
    if (temp_r3 != 0) {
        fn_03510f04(temp_r3, (char *)arg0 + 0xC);
    }
}
