namespace {
struct Object {
    char padding_0[0xC0];
    int *source_c0;
    char padding_c4[0x38];
    int value_fc;
};
}

extern "C" int fn_02c10774(int value);

extern "C" void fn_02bcc87c(void* object) {
    Object *view = (Object *)object;
    int value = *view->source_c0;
    view->value_fc = value;
    if (fn_02c10774(value) == 0) {
        view->value_fc = 0;
    }
}
