extern "C" void *data_1046e118;

extern "C" int fn_0379e128(void *self, unsigned modulus)
{
  if (data_1046e118 != 0) {
    return *(unsigned *)((char *)data_1046e118 + 0x10) % modulus != *(unsigned *)((char *)self + 0x50) % modulus;
  }
  return 0;
}
