typedef int s32;
typedef float f32;

extern "C" int fn_03191b70(void*);

extern "C" f32 data_1028c09c;
extern "C" void *data_1046cf88;

namespace {
struct Entry {
    unsigned char padding_0[0x68];
    f32 value;
};
}

extern "C" f32 fn_03192110(void) {
    s32 entry;

    entry = fn_03191b70(data_1046cf88);
    if (entry == 0) {
        return data_1028c09c;
    }
    return ((Entry *)entry)->value;
}
