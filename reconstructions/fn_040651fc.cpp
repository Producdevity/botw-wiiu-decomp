namespace {
struct Object {
    char padding_0[4];
    void (*handler)();
    int value;
};
}

extern "C" void fn_040651ec();

extern "C" void fn_040651fc(void* arg0, int value) {
    Object* object = (Object*)arg0;
    object->value = value;
    object->handler = fn_040651ec;
}
