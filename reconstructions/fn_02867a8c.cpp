typedef int s32;

extern "C" void fn_028650bc(void*, int);
extern "C" void fn_02865c54(void*, int);

namespace {
struct Object {
    char padding_0[0x1A8];
    s32 value_1a8;
    char padding_1ac[0x30];
    s32 value_1dc;
};
}

extern "C" void fn_02867a8c(void *object) {
    fn_028650bc(object, -1);
    fn_02865c54(object, -1);
    ((Object *) object)->value_1a8 = 0;
    ((Object *) object)->value_1dc = 0;
}
