typedef float f32;

extern "C" bool fn_03070fc4(void);
extern "C" void* data_1046bdd8;

extern "C" f32 data_1025cf84;

namespace {
struct Singleton {
    char padding_0[0x20];
    char member[0x58];
    f32 value;
};
}

extern "C" f32 fn_0307968c(void) {
    if (fn_03070fc4() != 0 && ((Singleton *) data_1046bdd8)->member != 0) {
        return ((Singleton *) data_1046bdd8)->value;
    }
    return data_1025cf84;
}
