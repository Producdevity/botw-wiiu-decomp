typedef int s32;
typedef float f32;

extern "C" const float data_10012ad8;

extern "C" f32 data_1001344c;

namespace {
struct Object {
    char padding_0[0xA38];
    f32 input;
    char padding_A3C[0x1F8];
    s32 state;
};
}

extern "C" void fn_0209bb5c(void *object, f32 newInput) {
    f32 previous;

    previous = ((Object *)object)->input;
    if ((previous == data_10012ad8) && (newInput > data_10012ad8)) {
        ((Object *)object)->state = 1;
    } else if ((previous == data_1001344c) && (newInput == data_10012ad8)) {
        ((Object *)object)->state = 2;
    }
    ((Object *)object)->input = newInput;
}
