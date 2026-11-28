struct Opaque_029505d0;

extern "C" void* fn_029505d0(const Opaque_029505d0* object);
extern "C" void fn_03188c88();

extern "C" void fn_029508d8(int handle) {
    if (fn_029505d0((const Opaque_029505d0*) handle) != 0) {
        fn_03188c88();
    }
}
