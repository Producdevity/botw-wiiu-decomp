typedef int s32;
typedef float f32;

namespace {
struct Range {
    unsigned char padding_0[0x10];
    f32 start;
    f32 end;
    unsigned char padding_18[4];
    f32 alt;
};
}

extern "C" f32 data_1033f4a8;
extern "C" f32 data_1033f4ac;

extern "C" f32 fn_03945190(void *object, s32 useAlt, f32 weight) {
    f32 start;
    f32 alt;

    if (useAlt != 0) {
        alt = ((Range *)object)->alt;
        if (!(alt < data_1033f4a8)) {
            return (weight * alt) + ((data_1033f4ac - weight) * ((Range *)object)->start);
        }
    }
    start = ((Range *)object)->start;
    return (weight * (((Range *)object)->end - start)) + start;
}
