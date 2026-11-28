typedef int s32;

extern "C" bool fn_03070fc4(void);
extern "C" void* data_1046bdd8;

extern "C" s32 data_10549db0;

namespace {
struct Singleton {
    char padding_0[0x20];
    char member[0x50];
    s32 value;
};
}

extern "C" s32 *fn_03079638(void) {
    if (fn_03070fc4() != 0 && ((Singleton *) data_1046bdd8)->member != 0) {
        return &((Singleton *) data_1046bdd8)->value;
    }
    return &data_10549db0;
}
