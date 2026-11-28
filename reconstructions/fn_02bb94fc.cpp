typedef float f32;

extern "C" void* fn_02c0378c(void* holder);

namespace {
struct Object {
    char padding_0[0x10];
    char holder[0xF8];
    f32 values[14];
};

struct Source {
    char padding_0[0x550];
    f32 values[14];
};
}

extern "C" void fn_02bb94fc(void *object, void *unused) {
    Source *source = (Source *)fn_02c0378c(((Object *)object)->holder);
    if (source != 0) {
        ((Object *)object)->values[0] = source->values[0];
        ((Object *)object)->values[1] = source->values[1];
        ((Object *)object)->values[2] = source->values[2];
        ((Object *)object)->values[3] = source->values[3];
        ((Object *)object)->values[4] = source->values[4];
        ((Object *)object)->values[5] = source->values[5];
        ((Object *)object)->values[6] = source->values[6];
        ((Object *)object)->values[7] = source->values[7];
        ((Object *)object)->values[8] = source->values[8];
        ((Object *)object)->values[9] = source->values[9];
        ((Object *)object)->values[10] = source->values[10];
        ((Object *)object)->values[11] = source->values[11];
        ((Object *)object)->values[12] = source->values[12];
        ((Object *)object)->values[13] = source->values[13];
    }
}
