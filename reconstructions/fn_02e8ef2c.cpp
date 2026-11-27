typedef int s32;

extern "C" void fn_02e8eb14(void*, int, int);
extern "C" void fn_02f74348(int);

namespace {
struct Object {
    char padding_0[0x10];
    s32 state;
};
}

extern "C" void fn_02e8ef2c(void *arg0) {
    Object *object = (Object *)arg0;
    s32 old_state;
    s32 new_state;

    old_state = object->state;
    object->state = 3;
    fn_02f74348(3);
    new_state = object->state;
    fn_02e8eb14(object, new_state, new_state - old_state);
}
