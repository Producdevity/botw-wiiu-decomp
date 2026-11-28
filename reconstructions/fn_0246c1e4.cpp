namespace {
struct Object {
    char padding_0[0x78];
    unsigned char *flag;
};
}

extern "C" void fn_022a0ea0(void*);
extern "C" void fn_030ea2cc(void *);
extern "C" int fn_03794838(void*, void*, void*);

extern "C" void fn_0246c1e4(void *object) {
    fn_022a0ea0(object);
    if ((*((Object *) object)->flag != 0) && (fn_03794838(object, 0, 0) != 0)) {
        fn_030ea2cc(object);
    }
}
