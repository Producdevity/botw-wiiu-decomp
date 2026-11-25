extern "C" void fn_032b5844(void *object)
{
  int zero = 0;
  *((unsigned char *)object + 16) = zero;
  *((unsigned char *)object + 17) = zero;
  int offset = 18;
  *(unsigned short *)((char *)object + offset) = 0;
}
