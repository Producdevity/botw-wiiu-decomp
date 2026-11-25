extern "C" int fn_03149588(void *, void *);
extern "C" int fn_03149858(void *);
extern "C" int fn_031499b8(void *, void *);
extern "C" void fn_03149adc(void *, void *);

extern "C" void fn_03149b5c(void *self, int key)
{
  int entry = fn_03149588(self, (void *)key);
  if (entry != 0) {
    *(unsigned short *)(entry + 0x686) = *(unsigned short *)(entry + 0x686) + 1;
    return;
  }
  entry = fn_03149858(self);
  if (entry != 0 && fn_031499b8((void *)entry, (void *)key) != 0) {
    fn_03149adc(self, (void *)entry);
  }
}
