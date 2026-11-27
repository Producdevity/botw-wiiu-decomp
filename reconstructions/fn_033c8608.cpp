typedef int s32;

extern "C" void fn_034ebca0(void*, void*);
extern "C" void fn_03984eec(void*);

namespace {
struct Object {
    void *child;
    char list[0x1C];
    s32 state;
};
}

extern "C" void fn_033c8608(void *arg0, s32 arg1) {
    Object *object = (Object *)arg0;
    void *child;

    fn_034ebca0(object->list, (void *)arg1);
    child = object->child;
    if (child != 0) {
        fn_03984eec(child);
    }
    object->state = 1;
}
