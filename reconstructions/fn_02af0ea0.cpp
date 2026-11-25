extern "C" void fn_02af0df4(void *);

extern "C" void fn_02af0ea0(void *self, void *other)
{
  char *vtable = (char *)*(void **)((char *)other + 0xE8);
  (*(void (**)(void *))(vtable + 0x134))(other);
  fn_02af0df4(self);
}
