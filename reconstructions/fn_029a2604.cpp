extern "C" void fn_024b7c10(void *, void *);
extern "C" void fn_029a0a30(void *);
extern "C" void fn_029a0a78(void *);

namespace {
struct Object {
    char padding_0[0x68];
    void *target;
    char padding_6c[8];
    short value_74;
};
}

extern "C" void fn_029a2604(void *self)
{
  int amount;
  fn_029a0a30(self);
  fn_029a0a78(self);
  void *object = self;
  ((Object *)object)->value_74 = 0;
  amount = 0xA;
  fn_024b7c10(((Object *)object)->target, &amount);
}
