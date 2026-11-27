typedef int s32;

extern "C" void* fn_0308e5a0(unsigned, void *, int);
extern "C" int fn_0313d09c(void);

namespace {
struct Object {
    char padding_0[0x28];
    void *child;
};
}

extern "C" s32 fn_031387c4(void *arg0, void *arg1) {
    Object *object = (Object *)arg0;
    void *child;

    child = fn_0308e5a0(0x38U, arg1, 4);
    if (child != 0) {
        child = (void *)fn_0313d09c();
    }
    object->child = child;
    return child != 0;
}
