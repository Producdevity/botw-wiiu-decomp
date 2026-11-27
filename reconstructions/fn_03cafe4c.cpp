namespace {
struct Object {
    char padding_0[0x18];
    int values[3];
};
}

extern "C" void fn_03cafe4c(void *arg0, unsigned int arg1, int arg2) {
    Object *object = (Object *) arg0;
    switch (arg1) {
    case 1:
        object->values[0] = arg2;
        return;
    case 2:
        object->values[1] = arg2;
        return;
    case 3:
        object->values[2] = arg2;
        return;
    }
}
