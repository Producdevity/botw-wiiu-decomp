namespace {
struct Object {
    char padding_0[0x24];
    float *value;
};
}

extern "C" void fn_02b6001c(void*, void*, void*, void*, void*, float);
extern "C" void fn_02b604c4(void*, void*);

extern "C" int data_10549de8;

extern "C" void fn_02408560(void *object, void *target) {
    fn_02b6001c(target, 0, 0, 0, 0, *((Object *) object)->value);
    fn_02b604c4(target, &data_10549de8);
}
