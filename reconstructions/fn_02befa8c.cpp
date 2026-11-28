namespace {
struct Vtable {
    char padding_0[0x154];
    void (*method_154)(void *, int);
};

struct Object {
    char padding_0[0xC];
    Vtable *vtable;
    char padding_10[0x12C];
    unsigned char state[1];
};
}

extern "C" void fn_02befa70(void* p);
extern "C" void fn_02befa7c(unsigned char* object, unsigned int bits);

extern "C" void fn_02befa8c(void* self, int value) {
    Object *object = (Object *)self;
    fn_02befa70(object->state);
    fn_02befa7c(object->state, 1);
    object->vtable->method_154(self, value);
}
