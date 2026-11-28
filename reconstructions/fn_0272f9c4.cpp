typedef int s32;

extern "C" void fn_0272f7c4(void*);
extern "C" int fn_034cc2f8(void*, void*);

namespace {
struct Object {
    char padding_0[0x20];
    s32 value;
};
}

extern "C" s32 fn_0272f9c4(void *object) {
    s32 key = 0xF;

    ((Object *) object)->value = fn_034cc2f8(0, &key);
    fn_0272f7c4(object);
    return 1;
}
