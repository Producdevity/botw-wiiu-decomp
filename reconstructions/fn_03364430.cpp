typedef float f32;

extern "C" void fn_03488b40(void*, void*);
extern "C" void fn_03489708(void*, void*, float);

extern "C" f32 data_102b4f40;
extern "C" f32 data_102b5018;

namespace {
struct Object {
    char padding_0[8];
    void *target;
};

struct Vector {
    f32 x;
    f32 y;
    f32 z;
};
}

extern "C" void fn_03364430(void *object) {
    Vector vector;

    fn_03488b40(&vector, ((Object *) object)->target);
    vector.x = data_102b4f40;
    vector.z = data_102b4f40;
    fn_03489708(((Object *) object)->target, &vector, data_102b5018);
}
