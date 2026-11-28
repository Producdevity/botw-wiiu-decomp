extern "C" void fn_02e6bf5c(void *, unsigned);
extern "C" void fn_03008534(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" int data_1022b1c0;
extern "C" int data_1022b1d0;
extern "C" int data_1022b1e8;

namespace {
struct Object {
    char padding_0[0x10];
    void *vtable_10;
    char padding_14[0x90];
    void *vtable_A4;
    void *vtable_A8;
};
}

extern "C" void fn_02f38f3c(void *self, int flags)
{
  if (self != 0) {
    *(void **)((char *)self + 0x10) = &data_1022b1c0;
    *(void **)((char *)self + 0xA8) = &data_1022b1d0;
    *(void **)((char *)self + 0xA4) = &data_1022b1e8;
    fn_02e6bf5c((char *)self + 0x1B90, 2U);
    fn_03008534(self, 0U);
    if (flags & 1) {
      fn_0308e6d0(self);
    }
  }
}
