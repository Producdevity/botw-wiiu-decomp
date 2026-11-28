struct Opaque_029505d0;

extern "C" void* fn_02c030fc(const Opaque_029505d0* object);
extern "C" void* fn_02c02d00(void* p);

extern "C" void fn_02c031e0(int handle) {
    void* object = fn_02c030fc((const Opaque_029505d0*) handle);
    if (object != 0) {
        fn_02c02d00(object);
    }
}
