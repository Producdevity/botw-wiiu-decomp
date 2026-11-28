typedef float f32;

extern "C" f32 data_101a8914;
extern "C" f32 data_101a8934;

namespace {
struct Slot {
    f32 value;
    char padding_4[0x1C];
};

struct Object {
    char padding_0[0x3B4];
    Slot slots[5];
};
}

extern "C" f32 fn_02ae90d0(void *object) {
    for (int index = 0; index < 5; index++) {
        f32 value = ((Object *)object)->slots[index].value;
        if (!(value < data_101a8914)) {
            return value;
        }
    }
    return data_101a8934;
}
