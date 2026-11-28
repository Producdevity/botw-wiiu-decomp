namespace {
struct Object {
    char padding_0[4];
    void (*handler)();
    int value;
};
}

extern "C" void fn_040651ec();

extern "C" void fn_040651fc(void* self, int value) {
    Object* object = static_cast<Object*>(self);
    object->value = value;
    object->handler = fn_040651ec;
}
