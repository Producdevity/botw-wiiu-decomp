namespace {
struct Object {
    char padding_0[0xDD];
    unsigned char flag;
};
}

extern "C" void fn_023c536c(void*);
extern "C" void fn_023c72d8(void*);
extern "C" bool fn_02b628fc(void);

extern "C" void fn_023c5efc(void *object) {
    fn_023c72d8(object);
    if ((fn_02b628fc() != 0) || (((Object *) object)->flag != 0)) {
        fn_023c536c(object);
    }
}
