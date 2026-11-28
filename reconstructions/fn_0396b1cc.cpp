typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03485a50(void *, void *);
extern "C" bool fn_03485c18(const void *);
extern "C" void fn_034868c0(void*, void*);

extern "C" s32 data_10346370;
extern "C" s32 data_103463e8;

namespace {
struct Object {
    char padding_0[0xC];
    s32 *first_table;
    s32 *second_table;
};

inline Object *fields(void *object) {
    return reinterpret_cast<Object *>(object);
}
}

extern "C" void fn_0396b1cc(void *object, s32 flags) {
    if (object != 0) {
        fields(object)->first_table = &data_10346370;
        fields(object)->second_table = &data_103463e8;
        if (fn_03485c18(object) != 0) {
            fn_034868c0(object, 0);
        }
        fn_03485a50(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
