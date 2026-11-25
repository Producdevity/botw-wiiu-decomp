extern "C" void fn_024b7c10(void *, void *);
extern "C" void fn_029a0a30(void *);
extern "C" void fn_029a0a78(void *);

extern "C" void fn_029a2604(void *self)
{
  int amount;
  fn_029a0a30(self);
  fn_029a0a78(self);
  void *object = self;
  *(short *)((char *)object + 0x74) = 0;
  amount = 0xA;
  fn_024b7c10(*(void **)((char *)object + 0x68), &amount);
}
