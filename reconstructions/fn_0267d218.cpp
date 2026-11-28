extern "C" void fn_0294f720(void *, int, void *);
namespace {
struct Target {
    char padding_0[0xE8];
    void* const* vtable;
};
}
extern "C" void fn_0267d218(void **object) {
    Target *target = (Target *)*object;
    ((int (*)(void *))target->vtable[255])(target);
    fn_0294f720(*object, 4, (char *)object + 0x54);
}
