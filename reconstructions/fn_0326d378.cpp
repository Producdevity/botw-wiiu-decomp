namespace {
struct Object {
    char padding_0[0x20];
    int flags;
};

struct Singleton {
    char padding_0[0x1C];
    int state;
};
}

extern "C" void fn_03417cc4(int);

extern "C" Singleton *data_1047aff0;

extern "C" void fn_0326d378(void *object) {
    if ((data_1047aff0 == 0) || (data_1047aff0->state != 1)) {
        fn_03417cc4(0);
        ((Object *) object)->flags |= 1;
    }
}
