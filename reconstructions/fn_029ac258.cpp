namespace {
struct Object {
    char padding_0[0x64];
    signed char value_64;
    char padding_65[3];
    int value_68;
};
}

extern "C" void fn_026a801c(void*, void*);
extern "C" int fn_0307cf5c(void*, void*);

extern "C" void fn_029ac258(void *object, void *other) {
    ((Object *) object)->value_64 = fn_0307cf5c(object, other);
    ((Object *) object)->value_68 = 0x1E;
    fn_026a801c(object, other);
}
