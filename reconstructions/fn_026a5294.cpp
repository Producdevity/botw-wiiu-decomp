extern "C" void fn_0252e820(void*);
extern "C" void fn_026a528c(void*);
extern "C" void fn_0294f828(void*, void*);
extern "C" void fn_02b12dbc(void*);

namespace {
struct Object {
    void *owner_0;
    char padding_4[0x70];
    unsigned char *flag_74;
    char padding_78[0x10];
    char member_88[1];
    char padding_89[0xA3];
    char member_12c[1];
};
}

extern "C" void fn_026a5294(void *object) {
    fn_0252e820(object);
    if (*static_cast<Object *>(object)->flag_74 != 0) {
        fn_02b12dbc(static_cast<Object *>(object)->member_88);
    }
    fn_026a528c(object);
    fn_0294f828(static_cast<Object *>(object)->owner_0, static_cast<Object *>(object)->member_12c);
}
