typedef int s32;
typedef float f32;

extern "C" void* fn_03bb14c0();

extern "C" f32 data_102e8934;

namespace {
struct Settings {
    char padding_0[0x20];
    f32 value;
};
}

extern "C" f32 fn_0359c4d8(void *object) {
    Settings *settings;

    settings = (Settings *)fn_03bb14c0();
    if (settings == 0) {
        return data_102e8934;
    }
    return settings->value;
}
