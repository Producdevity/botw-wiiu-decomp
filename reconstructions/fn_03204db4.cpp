extern "C" void fn_0320b6a0(void *);
namespace {
struct Object {
    char padding_0[0x728];
    void *buffer;
    char padding_72c[4];
    unsigned int flags;
};
}

extern "C" void fn_03204db4(void *self)
{
  unsigned int flags = ((Object *)self)->flags;
  if (((flags >> 19) & 1) ^ 1) {
    void *buffer = ((Object *)self)->buffer;
    if (buffer != 0) {
      fn_0320b6a0(buffer);
      ((Object *)self)->buffer = 0;
    }
  }
}
