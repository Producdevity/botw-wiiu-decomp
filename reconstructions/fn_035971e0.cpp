typedef float f32;

extern "C" void fn_03597158(void*);
extern "C" int fn_03ba9c30(void*);
struct LinearRamp;
extern "C" void fn_03bb5814(LinearRamp *);

namespace {
struct Object {
    unsigned char padding_0[4];
    unsigned char member_4;
    unsigned char padding_5[7];
    f32 value_c;
    unsigned char padding_10[4];
    f32 value_14;
};
}

extern "C" void fn_035971e0(void *object) {
    if (((Object *)object)->value_c != ((Object *)object)->value_14) {
        fn_03bb5814((LinearRamp *)&((Object *)object)->value_c);
    }
    if (fn_03ba9c30(&((Object *)object)->member_4) != 0) {
        fn_03597158(object);
    }
}
