namespace {
struct Manager {
    char padding_0[0x1C];
    int value_1c;
};

struct Object {
    char padding_0[0x1C];
    void *value_1c;
    char padding_20[8];
    int mode;
};
}

extern "C" void fn_0324f788(void*, void*);
extern "C" int data_1046d618;

extern "C" void fn_02e3e770(void* self)
{
    if (data_1046d618 != 0 && ((Manager *)data_1046d618)->value_1c == 0) {
        fn_0324f788((void*)data_1046d618, ((Object *)self)->value_1c);
        Object *object = (Object *)self;
        object->mode = 0x20;
    }
}
