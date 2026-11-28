struct Opaque_029505d0;

extern "C" void* fn_033a6bcc(const Opaque_029505d0* object);
extern "C" unsigned fn_0314eeb8(void* p);

extern "C" void fn_033a6f6c(int handle) {
    void* object = fn_033a6bcc((const Opaque_029505d0*) handle);
    if (object != 0) {
        fn_0314eeb8(object);
    }
}
