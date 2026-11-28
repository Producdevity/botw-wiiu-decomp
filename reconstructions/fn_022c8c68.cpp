extern "C" void fn_030ea2cc(void* object);
extern "C" int fn_0339a0d0(void* owner);

namespace {
struct Object {
    void* owner;
    char padding_4[7];
    unsigned char flags;
};
}

extern "C" void fn_022c8c68(void* object)
{
    Object* self = (Object*)object;
    if (fn_0339a0d0(self->owner) != 0) {
        self->flags |= 4;
        fn_030ea2cc(object);
    }
}
