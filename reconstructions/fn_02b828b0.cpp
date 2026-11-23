typedef signed char s8;
typedef int s32;

extern "C" int fn_02a279dc(void *, void *);
extern "C" void* data_1046378c;

extern "C" void fn_02b828b0(void *arg0) {
    void *temp_r3;

    temp_r3 = (char *)data_1046378c + 0x5C0;
    if (temp_r3 != 0) {
        fn_02a279dc(temp_r3, (*(void **)((char *)(arg0) + (0xB0))));
    }
    (*(s32 *)((char *)(arg0) + (8))) = 2;
    (*(s8 *)((char *)(arg0) + (0xC))) = 0;
}
