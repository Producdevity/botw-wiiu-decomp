extern "C" void fn_02535768(void*);
extern "C" void fn_0344bafc(void *);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_026110f8(void **object) {
    void *resource;

    resource = fn_037966a8(*object);
    if (resource != 0) {
        fn_0344bafc(resource);
    }
    fn_02535768(object);
}
