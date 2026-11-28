extern "C" void fn_0339a0c4(void* owner);
extern "C" void fn_0339a1a0(void* owner);
extern "C" void fn_0339a080(void* owner);

namespace {
struct Object {
    void *owner;
    char padding_4[0x10];
    unsigned char *flag;
};
}

extern "C" void fn_023c2f68(void* object) {
    void* owner = ((Object *) object)->owner;
    if (*((Object *) object)->flag != 0) {
        fn_0339a0c4(owner);
        fn_0339a1a0(((Object *) object)->owner);
        return;
    }
    fn_0339a080(owner);
}
