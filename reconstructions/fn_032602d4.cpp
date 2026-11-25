extern "C" void fn_0379884c(void *, void *);

extern "C" void fn_032602d4(void *self)
{
  void *table = *(void **)((char *)self + 0xC);
  void *target = (*(void *(**)(void *))((char *)table + 0x104))(self);
  if (target != 0) {
    fn_0379884c(*(void **)self, target);
  }
}
