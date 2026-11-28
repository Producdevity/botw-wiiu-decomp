extern "C" void fn_037ff8fc(void *);
extern "C" char *data_1047c3d8;

namespace {
struct Object {
    char padding_0[0x14];
    int value_14;
    char padding_18[0x140];
    int state_158;
};
}

extern "C" int fn_02c587cc(void *self)
{
    Object *object = (Object *)self;
    if (object->state_158 != 1 && object->value_14 == 0) {
        fn_037ff8fc(data_1047c3d8);
    }
    return 1;
}
