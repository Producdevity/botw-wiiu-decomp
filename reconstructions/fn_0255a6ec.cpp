typedef signed char s8;

extern "C" void fn_026dc1ec(void*);
extern "C" void fn_02b3f3b8(void*, void*);
extern "C" void fn_02b3f858(void*);
extern "C" void fn_0317be7c(void*);

namespace {
struct Type {
    char padding_0[0x38C];
    void *resource;
};

struct Object {
    Type *type;
    char padding_4[0x74 - 4];
    char member[9];
    s8 ready;
};
}

extern "C" void fn_0255a6ec(void *object) {
    void *resource;

    fn_02b3f858((char *)object + 0x74);
    fn_02b3f3b8((char *)object + 0x74, 0);
    ((Object *)object)->ready = 1;
    resource = ((Object *)object)->type->resource;
    if (resource != 0) {
        fn_0317be7c(resource);
    }
    fn_026dc1ec(object);
}
