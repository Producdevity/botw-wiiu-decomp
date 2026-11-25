extern "C" void fn_03ba3814(void *self)
{
  void *node = *(void **)((char *)self + 8);
  if (node != 0) {
    do {
      (*(void (**)(void *))((char *)*(void **)((char *)node + 0x14) + 0x44))(node);
      int nextOffset = 0xC;
      node = *(void **)((char *)node + nextOffset);
    } while (node != 0);
  }
  *(int *)((char *)self + 0x10) = 0;
}
