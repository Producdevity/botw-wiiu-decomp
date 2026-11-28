namespace {
struct Object {
    char padding_0[0x24];
    unsigned int first;
    unsigned int second;
};
}

extern "C" void fn_03a2de18(void*, void*);

extern "C" void fn_03a2ec34(void *object, unsigned int value) {
    if (value == ((Object *) object)->first) {
        fn_03a2de18(object, 0);
    }
    if (value == ((Object *) object)->second) {
        ((Object *) object)->second = 0U;
    }
}
