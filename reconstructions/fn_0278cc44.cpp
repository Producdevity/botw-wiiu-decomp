typedef int s32;
typedef float f32;

extern "C" bool fn_03713060(void*, unsigned, float, int);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" f32 data_1012d2f0;
extern "C" s32 data_1012d2f4;

namespace {
struct Owner {
    char padding_0[0x394];
    void *slots;
};
}

extern "C" void fn_0278cc44(void **object) {
    fn_03713060(((Owner *)*object)->slots, 9U, data_1012d2f0, 0);
    fn_037b8284(object, &data_1012d2f4, 0);
}
