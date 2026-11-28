namespace {
struct Object {
    char padding_0[8];
    char member[1];
    char padding_9[0x64B];
    int value_654;
};
}

struct InferredObject;
extern "C" bool fn_03c124c0(const void*);
extern "C" void fn_03c15abc(void*);

extern "C" void fn_030c7888(void *object) {
    if (fn_03c124c0((const InferredObject *) ((Object *) object)->member) != 0) {
        fn_03c15abc(((Object *) object)->member);
    }
    ((Object *) object)->value_654 = 0;
}
