typedef unsigned int u32;

extern "C" void fn_02e34cf4(unsigned int *);
extern "C" void fn_02e34f4c(void);
extern "C" void fn_02e34f90(void);
extern "C" void fn_0307e078(void);
extern "C" void fn_03a122f0(void *, unsigned);

extern "C" void *data_1047e408;
extern "C" u32 data_105296b4;

namespace {
struct Object {
    char padding_0[0x18];
    signed char active;
};
}

extern "C" void fn_02e350b4(void *object) {
    reinterpret_cast<Object *>(object)->active = 0;
    fn_03a122f0(data_1047e408, 0U);
    fn_02e34f4c();
    fn_02e34f90();
    fn_0307e078();
    fn_02e34cf4(&data_105296b4);
}
