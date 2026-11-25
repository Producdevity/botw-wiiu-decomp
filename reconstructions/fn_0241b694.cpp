extern "C" void fn_0241bd3c(void *);
extern "C" void fn_0294f720(void *, int, void *);

extern "C" void fn_0241b694(void *self)
{
  fn_0241bd3c(self);
  unsigned char flags = *((unsigned char *)self + 0xB) & ~4;
  *((unsigned char *)self + 0xB) = flags;
  fn_0294f720(*(void **)self, 4, (char *)self + 0x64);
  (*(void (**)(void *))((char *)*(void **)((char *)self + 0xC) + 0x124))(self);
}
