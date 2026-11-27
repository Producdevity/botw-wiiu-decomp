typedef int s32;

extern "C" void fn_0350b448(void *);
extern "C" int fn_0350b68c(void*);
extern "C" int fn_0350b700(void*, int, void*);

namespace {
struct Object {
    char padding_0[0x18];
    void *buffer;
    s32 state;
};
}

extern "C" void fn_0350bd50(void *arg0) {
    Object *object = (Object *)arg0;
    s32 count;

    count = fn_0350b68c(object);
    if (count != 0 && fn_0350b700(object, count, object->buffer) == 0) {
        fn_0350b448(object);
        object->state = 0;
    }
}
