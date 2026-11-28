struct Opaque_029505d0;

extern "C" void* fn_029505d0(const Opaque_029505d0* object);
extern "C" void fn_03188ca4();

extern "C" void fn_02950904(void* handle) {
    if (fn_029505d0(static_cast<const Opaque_029505d0*>(handle)) != 0) {
        fn_03188ca4();
    }
}
