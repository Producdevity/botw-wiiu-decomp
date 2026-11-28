extern "C" void fn_03487098(void* manager, void* entry);

namespace {
struct Owner {
    char padding_0[0xF4];
    void* manager;
};

struct Object {
    Owner* owner;
    char padding_4[0x14];
    void* entry;
};
}

extern "C" void fn_021a1530(void* object)
{
    Object* self = (Object*)object;
    void* manager = self->owner->manager;
    if (manager != 0) {
        fn_03487098(manager, self->entry);
        self->entry = 0;
    }
}
