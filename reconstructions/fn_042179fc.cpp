extern "C" void fn_04217d20(void *, void *, int);

extern "C" void fn_042179fc(void *self)
{
  char *object = (char *)self;
  void *start = *(void **)(object + 0xC);
  fn_04217d20(self, start, *(char **)(object + 0x28) - (char *)start);
  *(void **)(object + 0x28) = *(void **)(object + 0xC);
  *(int *)(object + 0x30) = 0;
}
