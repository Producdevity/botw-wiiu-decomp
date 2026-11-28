

namespace {
struct Message {
    void *const *vtable;
};
struct Object {
    char padding_0[72];
    int value_48;
};
}

extern "C" int fn_022f867c(void* object, void* * message) {
    typedef unsigned int *(*GetId)(void **);
    typedef int *(*GetValue)(void **);
    if (*((GetId) ((Message *) message)->vtable[9])(message) == 0x02000001U) {
        ((Object *) object)->value_48 = *((GetValue) ((Message *) message)->vtable[11])(message);
    }
    return 1;
}
