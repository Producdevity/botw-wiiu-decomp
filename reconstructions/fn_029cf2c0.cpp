extern "C" void fn_03b9fe0c(void*, int, float);

namespace {
struct Manager {
    char padding_0[0x40];
    void *first;
    void *second;
};

struct Owner {
    char padding_0[0x398];
    Manager *manager;
};

struct Object {
    Owner *owner;
    char padding_4[0x14];
    float value;
};
}

extern "C" void fn_029cf2c0(void* object)
{
    Owner *owner = ((Object *) object)->owner;
    Manager *manager = owner->manager;
    fn_03b9fe0c(manager->second, 0x1F, ((Object *) object)->value);
    owner = ((Object *) object)->owner;
    manager = owner->manager;
    fn_03b9fe0c(manager->first, 0x1F, ((Object *) object)->value);
}
