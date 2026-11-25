extern "C" void fn_02787a8c(void *object)
{
  char *base = (char *)object;
  *((char *)object + 40) = 0;
  *((char *)object + 44) = 0;
  char *flag = base + 45;
  *flag = 0;
}
