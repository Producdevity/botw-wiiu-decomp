extern "C" void fn_026d83bc(void*, int);

namespace {
struct TargetVtable {
    char padding_0[0x34];
    int (*check)();
};
struct Target {
    char padding_0[12];
    TargetVtable *vtable;
};
struct ObjectVtable {
    char padding_0[0xD4];
    Target *(*get_target)(void *);
};
struct Object {
    char padding_0[12];
    ObjectVtable *vtable;
    char padding_10[0x18];
    unsigned char *flag_28;
    unsigned char *flag_2c;
};
}

extern "C" void fn_026d8500(void* object) {
    if (*((Object *) object)->flag_28 != 0 && (((Object *) object)->vtable->get_target(object)->vtable->check() != 0 || *((Object *) object)->flag_2c != 0)) {
        fn_026d83bc(object, 0);
    }
}
