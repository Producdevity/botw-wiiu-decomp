extern "C" void fn_030a5188(void *, unsigned);
extern "C" void fn_030a5190(void*, void*);
extern "C" void fn_030a51c4(unsigned *, unsigned);

extern "C" int data_10549864;

extern "C" void fn_03bb6798(unsigned int *object, unsigned int value, void *other) {
    fn_030a5188(object, value);
    fn_030a5190(object, other);
    fn_030a51c4(object, (unsigned int) &data_10549864);
}
