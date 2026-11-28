extern "C" void fn_02b74ac8(void* owner);
extern "C" void fn_0348e0e0(void* manager, void* value);
extern "C" void fn_028fd050(void* object, void* value);

namespace {
struct Owner {
    char padding_0[0xF4];
    void *manager;
};

struct Object {
    Owner *owner;
    char padding_4[0x98];
    unsigned char flag;
};
}

extern "C" void fn_028fe258(void* object) {
    fn_02b74ac8(((Object *) object)->owner);
    void* manager = ((Object *) object)->owner->manager;
    if (manager != 0) {
        fn_0348e0e0(manager, (void*)((Object *) object)->flag);
    }
    fn_028fd050(object, (void*)1);
}
