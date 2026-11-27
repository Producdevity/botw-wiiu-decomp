typedef int s32;
typedef float f32;

extern "C" int fn_0258afd4(void);

extern "C" f32 data_100e6adc;

namespace {
struct Entry {
    char padding_0[0x4C];
    f32 value;
};
}

extern "C" f32 fn_0258b0cc(void) {
    Entry *entry;

    entry = (Entry *)fn_0258afd4();
    if (entry != 0) {
        return entry->value;
    }
    return data_100e6adc;
}
