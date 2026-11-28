extern "C" void fn_02b54174(void* owner);
extern "C" void fn_02b542b8(void* owner);
extern "C" void fn_02b54b50(void* owner);

namespace {
struct Object {
    void *owner;
    char padding_4[0x14];
    unsigned char *flag;
};
}

extern "C" void fn_0221b898(void* object) {
    void* owner = ((Object *) object)->owner;
    fn_02b54174(owner);
    fn_02b542b8(owner);
    if (*((Object *) object)->flag != 0) {
        fn_02b54b50(owner);
    }
}
