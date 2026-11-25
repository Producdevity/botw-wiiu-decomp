extern "C" void fn_02d49a0c(void *self, void *value)
{
  void *owner = *(void **)((char *)self + 0x30);
  if (owner != 0) {
    *(*(void **(**)(void *))(*(char **)((char *)owner + 0xE8) + 0x2BC))(owner) = value;
  }
}
