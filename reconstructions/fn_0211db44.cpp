extern "C" void fn_0379c1b4(void *owner, void *value, void *extra);
extern "C" void fn_02c19bfc(void *resource);

namespace {
struct Object {
    void *owner;
    char padding_4[0x28];
    void *resource_2c;
};
}

extern "C" void fn_0211db44(void *object)
{
    fn_0379c1b4(((Object *)object)->owner, (void *)0x20, 0);
    void *resource = ((Object *)object)->resource_2c;
    if (resource != 0) {
        fn_02c19bfc(resource);
        ((Object *)object)->resource_2c = 0;
    }
}
