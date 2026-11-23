typedef unsigned char u8;
typedef int s32;

extern "C" void fn_02d52714(void*, int, int, void*, void*, void*);
extern "C" bool fn_0378da88(void *);
extern "C" const unsigned char data_10549dd0[];

extern "C" void fn_02caf2c0(void *arg0) {
    void *temp_r3;

    if (fn_0378da88((char *)(*(void **)((char *)(arg0) + (0))) + 0xA5C) != 0) {
        temp_r3 = (*(void **)((char *)(arg0) + (0)));
        fn_02d52714(temp_r3, (s32) (*(u8 *)((char *)(arg0) + (0x39))), 1, (void *)(data_10549dd0), (char *)temp_r3 + 0xA5C, (void *)(data_10549dd0));
    }
}
