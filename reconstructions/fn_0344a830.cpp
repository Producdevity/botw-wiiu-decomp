namespace {
struct Object {
    char padding_0[0xE8];
    unsigned int flags;
};
}

extern "C" int fn_0344a6b4(void *, int);
extern "C" int fn_0344a798(void *, int, int);

extern "C" void fn_0344a830(void *arg0, int arg1) {
    Object *object = (Object *) arg0;
    int enabled = 0;
    if ((object->flags >> 16) & 1) {
        fn_0344a6b4(arg0, arg1);
        enabled = 1;
    }
    fn_0344a798(arg0, arg1, enabled);
}
