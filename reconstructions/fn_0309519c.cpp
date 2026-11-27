namespace {
struct Object {
    char padding_0[0x68];
    int override_value;
};
}

extern "C" int data_1046c86c;

extern "C" int fn_0309519c(void *arg0) {
    Object *object = (Object *) arg0;
    int value = object->override_value;
    if (value == 0) {
        return data_1046c86c + 0x24;
    }
    return value;
}
