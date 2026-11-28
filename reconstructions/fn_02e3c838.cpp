namespace {
struct Manager {
    char padding_0[0x1C];
    int value_1c;
};

struct Object {
    char padding_0[0x20];
    void *value_20;
    char padding_24[4];
    int mode;
};
}

extern "C" void fn_02e3c600(void*, void*);
extern "C" int data_1046d618;

extern "C" void fn_02e3c838(void* self)
{
    if (data_1046d618 != 0 && ((Manager *)data_1046d618)->value_1c == 0) {
        fn_02e3c600(self, ((Object *)self)->value_20);
        Object *object = (Object *)self;
        object->mode = 0xF;
    }
}
