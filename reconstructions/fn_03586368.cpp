typedef int s32;
extern "C" int fn_0359ca44(void*, void*, void*, void*, void*);
extern "C" void *data_104722b0;

namespace {
struct Object {
    char padding_0[0x14];
    s32 value_14;
};
}

extern "C" void fn_03586368(void *object, void *arg) {
    ((Object *) object)->value_14 = fn_0359ca44(data_104722b0, arg, 0, 0, 0);
}
