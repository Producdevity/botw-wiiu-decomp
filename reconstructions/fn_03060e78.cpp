typedef int s32;
typedef float f32;

extern "C" void fn_03060d8c(void*);
extern "C" int fn_0379253c(void *, float);

extern "C" f32 data_1025b218;

namespace {
struct Object {
    char padding_0[0xC];
    f32 time;
    char padding_10[4];
    unsigned char pending;
};

inline Object *fields(void *object) {
    return reinterpret_cast<Object *>(object);
}
}

extern "C" s32 fn_03060e78(void *object, void *unused) {
    if (fields(object)->time == data_1025b218) {
        if (fields(object)->pending != 0) {
            fields(object)->pending = 0;
            return 1;
        }
        return 0;
    }
    fn_03060d8c(object);
    if (fn_0379253c(object, fields(object)->time) != 0) {
        return 1;
    }
    return 0;
}
