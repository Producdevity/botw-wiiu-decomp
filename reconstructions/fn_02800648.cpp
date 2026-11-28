namespace {
struct Object {
    void *owner;
    char padding_4[0x164];
    unsigned char value_168;
};
}

extern "C" void fn_025e83d8(void *);
extern "C" void fn_027ffe14(void*, void*);
extern "C" void fn_02b51bb8(void*, int);

extern "C" void fn_02800648(void *object) {
    Object *view = (Object *) object;
    fn_025e83d8(object);
    fn_027ffe14(object, 0);
    fn_02b51bb8(view->owner, view->value_168);
}
