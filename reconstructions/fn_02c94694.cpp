extern "C" unsigned int fn_02d82148(const void *);
extern "C" void fn_030ea2cc(void *);

extern "C" void fn_02c94694(void *self)
{
  void (*callback)(void *) = *(void (**)(void *))((char *)*(void **)((char *)self + 0xC) + 0x104);
  callback(self);
  if (fn_02d82148(*(void **)self) != 0) {
    fn_030ea2cc(self);
  }
}
