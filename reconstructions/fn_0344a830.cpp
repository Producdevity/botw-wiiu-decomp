namespace {
struct Object {
    char padding_0[0xE8];
    unsigned int flags;
};
}

extern "C" int fn_0344a6b4(void *, int);
extern "C" int fn_0344a798(void *, int, int);

extern "C" void fn_0344a830(void *self, int value) {
    Object *object = (Object *) self;
    int enabled = 0;
    if ((object->flags >> 16) & 1) {
        fn_0344a6b4(self, value);
        enabled = 1;
    }
    fn_0344a798(self, value, enabled);
}
