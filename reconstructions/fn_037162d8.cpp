typedef int s32;
typedef float f32;

extern "C" int fn_03715d24(void);

extern "C" f32 data_1030afec;

namespace {
struct Settings {
    char padding_0[4];
    f32 value;
};
}

extern "C" f32 fn_037162d8(void) {
    Settings *settings;

    settings = (Settings *)fn_03715d24();
    if (settings == 0) {
        return data_1030afec;
    }
    return settings->value;
}
