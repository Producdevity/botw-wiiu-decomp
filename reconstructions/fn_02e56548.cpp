namespace {
struct Object {
    char padding_0[0xC];
    int value;
    int mode;
};
}

extern "C" void fn_0378dc60(int, int);

extern "C" void fn_02e56548(int arg0, int arg1, int value) {
    Object* object = (Object*)arg0;
    fn_0378dc60(arg0, arg1);
    object->value = value;
    object->mode = 2;
}
