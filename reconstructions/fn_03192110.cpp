typedef int s32;
typedef float f32;

extern "C" int fn_03191b70(void*);

extern "C" f32 data_1028c09c;
extern "C" void *data_1046cf88;

extern "C" f32 fn_03192110(void) {
    s32 temp_r3;

    temp_r3 = fn_03191b70(data_1046cf88);
    if (temp_r3 == 0) {
        return data_1028c09c;
    }
    return (*(f32 *)((char *)(temp_r3) + (0x68)));
}
