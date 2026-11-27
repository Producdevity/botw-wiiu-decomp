namespace {
struct Object {
    void *target;
    char padding_4[0x60];
    char position[0x10];
    float scale;
};
}

extern "C" void fn_03448a5c(void *, int);
extern "C" int fn_0344a2d0(void *, int *);
extern "C" int fn_0344a2fc(void *, void *);
extern "C" void fn_0344a37c(void *, float);
extern "C" void *fn_037966a8(void *);
extern "C" int data_10549de8;

extern "C" void fn_022cb8e8(void *arg0) {
    void *handle = fn_037966a8(((Object *) arg0)->target);
    if (handle != 0) {
        fn_0344a2fc(handle, ((Object *) arg0)->position);
        fn_0344a37c(handle, ((Object *) arg0)->scale);
        fn_03448a5c(handle, 1);
        fn_0344a2d0(handle, &data_10549de8);
    }
}
