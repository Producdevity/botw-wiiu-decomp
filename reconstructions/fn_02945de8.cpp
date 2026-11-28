namespace {
struct Owner {
    char padding_0[0x330];
    void *component;
};
}

extern "C" void fn_02945d9c(void*);
extern "C" void fn_02c1a484(void*);
extern "C" void fn_0339a0c4(void *);
extern "C" void fn_03985a50(void*, int, void*);

extern "C" void fn_02945de8(void **object) {
    fn_03985a50(((Owner *)*object)->component, 1, 0);
    fn_02c1a484(*object);
    fn_0339a0c4(*object);
    fn_02945d9c(object);
}
