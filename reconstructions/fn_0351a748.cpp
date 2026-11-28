struct Opaque_029505d0;

extern "C" void* fn_0351a11c(const Opaque_029505d0* object);
extern "C" void fn_0351ca18(void *object);

extern "C" void fn_0351a748(int handle) {
    void* object = fn_0351a11c((const Opaque_029505d0*) handle);
    if (object != 0) {
        fn_0351ca18(object);
    }
}
