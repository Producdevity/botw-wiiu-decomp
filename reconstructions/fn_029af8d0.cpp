struct Opaque_029505d0;

extern "C" void* fn_03519c78(const Opaque_029505d0* object);
extern "C" void fn_03510cc4();

extern "C" void fn_029af8d0(int handle) {
    if (fn_03519c78((const Opaque_029505d0*) handle) != 0) {
        fn_03510cc4();
    }
}
