extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03c41d38(void *, void *);

extern "C" void fn_03c44d6c(void *self, int flags)
{
  int valid = self != 0;
  if (valid) {
    fn_03c41d38(self, 0);
    if (flags & 1) {
      fn_0308e6d0(self);
    }
  }
}
