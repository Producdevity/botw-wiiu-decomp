extern "C" void fn_02f351b4(void *);
extern "C" void *fn_0308e578(unsigned);

namespace {
struct Object {
    unsigned char padding_0[0x2BC];
    int value_2bc;
    int value_2c0;
    char value_2c4;
    char value_2c5;
};
}

extern "C" void *fn_02f3cfcc(void *self)
{
  if (self != 0 || (self = fn_0308e578(0x2C8U)) != 0) {
    fn_02f351b4(self);
    int zero = 0;
    ((Object *)self)->value_2bc = zero;
    ((Object *)self)->value_2c0 = zero;
    ((Object *)self)->value_2c4 = zero;
    ((Object *)self)->value_2c5 = zero;
  }
  return self;
}
