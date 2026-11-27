namespace {
struct Object {
    char padding_0[0x55];
    signed char flag_55;
    signed char flag_56;
};
}

extern "C" void fn_03c970d4(void *arg0, unsigned int arg1, signed char arg2) {
    Object *object = (Object *) arg0;
    switch (arg1) {
    case 2:
        object->flag_55 = arg2;
        return;
    case 3:
        object->flag_56 = arg2;
        return;
    }
}
