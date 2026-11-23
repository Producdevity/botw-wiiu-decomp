typedef unsigned char u8;

extern "C" void* fn_031271f0(void *, const void *);
extern "C" unsigned char data_1057f3c4[];

extern "C" u8 *fn_022001d8(void **arg0) {
    void* const* vt1;
    u8 *var_r0;
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = *arg0;
    temp_r3_2 = ((void * (*)(void *))(vt1 = *(void* const**)((char *)(temp_r3) + (0xE8)))[203])(temp_r3);
    var_r0 = data_1057f3c4;
    if (temp_r3_2 != 0) {
        var_r0 = (u8 *)(fn_031271f0(temp_r3_2, (char *)arg0 + 0x30));
    }
    return var_r0;
}
