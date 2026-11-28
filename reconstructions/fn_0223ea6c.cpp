extern "C" void fn_0294c4d4(void* owner, int value, int a, int b);
extern "C" void fn_029505e4(void* owner, int value);
extern "C" int fn_02b62a40();
extern "C" void fn_02b7580c(void* owner);

namespace {
struct Object {
    void *owner;
    char padding_4[0xC];
    unsigned char *enabled;
};
}

extern "C" int fn_0223ea6c(void* object) {
    fn_02b7580c(((Object *)object)->owner);
    int value = fn_02b62a40();
    fn_029505e4(((Object *)object)->owner, value);
    if (*((Object *)object)->enabled != 0) {
        fn_0294c4d4(((Object *)object)->owner, value, 1, 1);
    }
    return 1;
}
