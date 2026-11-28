extern "C" void fn_027234dc(void*, void*);
struct Owner;
extern "C" bool fn_029534d8(void*, int, int, int, int);

namespace {
struct Object {
    Owner *owner;
    char padding_4[0x4C];
    void *value;
};
}

extern "C" void fn_027246b8(void *object) {
    if (fn_029534d8(((Object *) object)->owner, 0x2C, 0, 0, 0) != 0) {
        fn_027234dc(object, ((Object *) object)->value);
    }
}
