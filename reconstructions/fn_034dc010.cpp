namespace {
struct Object {
    char padding_0[0x60];
    unsigned char active;
    char padding_61[0x57];
    char link[1];
};
}

extern "C" void fn_03205fbc(int, int);
extern "C" void fn_034dbf80(void*);

extern "C" int data_1046d5b0;

extern "C" void fn_034dc010(void* self) {
    Object* object = (Object*)self;
    if (object->active != 0) {
        fn_03205fbc(data_1046d5b0, (int)object->link);
        fn_034dbf80(self);
        object->active = 0;
    }
}
