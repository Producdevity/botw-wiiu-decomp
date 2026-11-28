

namespace {
struct Message {
    void *const *vtable;
};
struct Object {
    char padding_0[52];
    int value_34;
};
}

extern "C" int fn_0206d1d4(void* object, void* * message) {
    typedef unsigned int *(*GetId)(void **);
    typedef int *(*GetValue)(void **);
    if (*((GetId) ((Message *) message)->vtable[9])(message) == 0x02000001U) {
        ((Object *) object)->value_34 = *((GetValue) ((Message *) message)->vtable[11])(message);
    }
    return 1;
}
