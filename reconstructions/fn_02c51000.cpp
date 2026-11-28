typedef float f32;

extern "C" void fn_02c50fdc(void*);
extern "C" unsigned char data_1051365c[];

namespace {
struct Vector {
    f32 x;
    f32 y;
    f32 z;
};
}

extern "C" void fn_02c51000(void *source) {
    fn_02c50fdc(source);
    ((Vector *) data_1051365c)->x = ((Vector *) source)->x;
    ((Vector *) data_1051365c)->y = ((Vector *) source)->y;
    ((Vector *) data_1051365c)->z = ((Vector *) source)->z;
}
