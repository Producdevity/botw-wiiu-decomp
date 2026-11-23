typedef float f32;

extern "C" bool fn_03485c18(const void *);
extern "C" void fn_03485f68(void*);
extern "C" void fn_03489708(void*, void*, float);
extern "C" const unsigned char data_10549dd0[];

extern "C" f32 data_1015337c;

extern "C" void fn_028a2514(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x2C)));
    if ((temp_r3 != 0) && (fn_03485c18(temp_r3) != 0)) {
        fn_03485f68((*(void **)((char *)(arg0) + (0x2C))));
        fn_03489708((*(void **)((char *)(arg0) + (0x2C))), (void *)(data_10549dd0), data_1015337c);
    }
}
