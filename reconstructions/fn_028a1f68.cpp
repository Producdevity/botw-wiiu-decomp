typedef signed char s8;
typedef int s32;

extern "C" void* fn_037a7f44(void *, void *, const char *);

extern "C" s8 data_10153324;
extern "C" s32 data_1015332c;

extern "C" s32 fn_028a1f68(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0)));
    (*(s32 *)((char *)(arg0) + (0x28))) = (s32) (*(s32 *)((char *)(temp_r3) + (0xF4)));
    (*(void **)((char *)(arg0) + (0x2C))) = fn_037a7f44(temp_r3, &data_1015332c, (const char *)(&data_10153324));
    return 1;
}
