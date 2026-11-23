typedef float f32;

extern "C" bool fn_03070fc4(void);
extern "C" void* data_1046bdd8;

extern "C" f32 data_1025cf84;

extern "C" f32 fn_03078c9c(void) {
    if (fn_03070fc4() == 0) {
        return data_1025cf84;
    }
    return (*(f32 *)((char *)(data_1046bdd8) + (0x2C)));
}
