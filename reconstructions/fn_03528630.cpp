typedef int s32;
typedef float f32;

extern "C" void* fn_0354ed84(void *, const void *);

extern "C" f32 data_102d7c8c;
extern "C" s32 data_10555e38;

namespace {
struct Object {
    char padding_0[0x144];
    f32 value;
};
}

extern "C" void fn_03528630(void *object) {
    fn_0354ed84((char *) object + 4, &data_10555e38);
    ((Object *) object)->value = data_102d7c8c;
}
