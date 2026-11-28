extern "C" float data_1008a974;
extern "C" void fn_02345624(void*, void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

namespace {
struct Handler {
    char padding_0[28];
    int (*callback)(void*);
};

struct Object {
    char padding_0[24];
    unsigned char *kind;
    int value_1c;
    Handler *handler;
};
}

extern "C" void fn_02344914(void* object, void* other) {
    ((Object *) object)->handler->callback(&((Object *) object)->value_1c);
    fn_037946f0(object, ((Object *) object)->value_1c, *((Object *) object)->kind, 0, 0, data_1008a974);
    fn_02345624(object, other);
}
