extern "C" void fn_02bb95f0(char *self, char *out)
{
  float from = *(float *)(self + 76);
  *(float *)(out + 36) = from + ((*(float *)(self + 244) - from) * *(float *)(self + 488));
}
