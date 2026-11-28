namespace {
struct Object {
    char padding_0[0x44];
    int *source_44;
    char padding_48[4];
    int value_4c;
};
}

extern "C" int fn_02c10774(int value);

extern "C" void fn_02bfeb80(void* object) {
    Object *view = (Object *)object;
    int value = *view->source_44;
    view->value_4c = value;
    if (fn_02c10774(value) == 0) {
        view->value_4c = 0;
    }
}
