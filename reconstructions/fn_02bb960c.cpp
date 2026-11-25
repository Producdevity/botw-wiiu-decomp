extern "C" void fn_02bb960c(char *self, char *out)
{
  float from = *(float *)(self + 80);
  *(float *)(out + 40) = from + (*(float *)(self + 248) - from) * *(float *)(self + 488);
}
