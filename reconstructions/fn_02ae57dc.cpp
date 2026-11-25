extern "C" void *fn_02c1974c(void *, int);

extern "C" int fn_02ae57dc(void *self)
{
  switch (*(unsigned int *)((char *)self + 0x40)) {
    case 2:
    case 10: {
      int slot = *(int *)((char *)self + 0x50);
      if (slot >= 0) {
        void *entry = fn_02c1974c(*(void **)((char *)self + 8), slot);
        if (entry != 0) {
          return *(int *)((char *)entry + 0xC8);
        }
      }
      return -1;
    }
    case 6:
      if ((*(unsigned short *)((char *)self + 0x18E) >> 8) & 1) {
        int slot = *(int *)((char *)self + 0x50);
        if (slot >= 0) {
          void *entry = fn_02c1974c(*(void **)((char *)self + 8), slot);
          if (entry != 0) {
            return *(int *)((char *)entry + 0xC8);
          }
        }
      }
      return -1;
    default:
      return -1;
  }
}
