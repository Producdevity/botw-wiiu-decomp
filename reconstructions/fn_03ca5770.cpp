namespace {
struct Object {
    char padding_0[0x4C];
    int value_4c;
    int value_50;
    char padding_54[4];
    int value_58;
    int value_5c;
    int value_60;
};
}

extern "C" void fn_03ca7d98(void*);

extern "C" void fn_03ca5770(void *object) {
    fn_03ca7d98(object);
    ((Object *) object)->value_58 = 0;
    ((Object *) object)->value_4c = 4;
    ((Object *) object)->value_50 = 0x10;
    ((Object *) object)->value_5c = -1;
    ((Object *) object)->value_60 = 0;
}
