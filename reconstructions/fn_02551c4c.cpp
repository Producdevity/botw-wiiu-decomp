extern "C" void fn_02551c4c(void *object)
{
  int offset = 45;
  char *flag = (char *)object + 40;
  *flag = 0;
  *((char *)object + 44) = 0;
  *((char *)object + offset) = 0;
}
