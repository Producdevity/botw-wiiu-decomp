extern "C" void fn_030ea2cc(void*);

namespace {
struct Handlers {
    char padding_0[0x104];
    void (*handler)(void*);
};

struct Object {
    char padding_0[0xB];
    unsigned char flags;
    Handlers* handlers;
    int* value;
};
}

extern "C" void fn_0239a1b4(void* self)
{
    Object* object = static_cast<Object*>(self);
    int value = *object->value;
    void (*handler)(void*);
    if (value == 0) {
        handler = object->handlers->handler;
        handler(self);
    }
    object->flags |= 4;
    fn_030ea2cc(self);
}
