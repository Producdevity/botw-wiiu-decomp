extern "C" void fn_03ba373c(void *self)
{
  void *node = *(void **)((char *)self + 8);
  if (node != 0) {
    do {
      char *classSlot = (char *)node + 0x14;
      (*(void (**)(void *))((char *)*(void **)classSlot + 0x34))(node);
      node = *(void **)((char *)node + 0xC);
    } while (node != 0);
  }
  *(int *)((char *)self + 0x10) = 0;
}
