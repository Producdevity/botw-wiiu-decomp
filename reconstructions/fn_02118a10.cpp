extern "C" void fn_030ea2e0(void *);

extern "C" void fn_02118a10(void *self)
{
  if ((*(int (**)(void *))((char *)*(void **)((char *)self + 0xC) + 0x10C))(self) == 0) {
    fn_030ea2e0(self);
  }
}
