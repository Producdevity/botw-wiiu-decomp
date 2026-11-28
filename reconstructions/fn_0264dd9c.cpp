typedef int s32;

struct HeroSoulGiftRoot;
extern "C" void fn_026a82cc(HeroSoulGiftRoot*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100ffd70;

extern "C" void fn_0264dd9c(void *object) {
    struct { const void *string; const void *vtable; } name;

    fn_026a82cc((HeroSoulGiftRoot*)object);
    name.vtable = &data_10263910;
    name.string = &data_100ffd70;
    fn_030e9be0(object, (char *)object + 0x64, &name.string);
}
