namespace {
struct Object {
    char padding_0[0xC];
    void *first;
    char padding_10[0x10];
    void *second;
};
}

extern "C" void fn_030c078c(void*, void*, void*);
extern "C" void fn_030c44cc(void*, void*, void*);

extern "C" void fn_03aea874(void *object, void *second, void *third) {
    fn_030c078c(((Object *) object)->first, second, third);
    fn_030c44cc(((Object *) object)->second, second, ((Object *) object)->first);
}
