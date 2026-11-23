typedef int s32;

extern "C" void fn_037ad824(void*, int);

extern "C" void fn_02b7b744(void *arg0) {
    fn_037ad824(arg0, 0x10);
    fn_037ad824(arg0, 4);
    (*(s32 *)((char *)(arg0) + (0x364))) = (s32) ((*(s32 *)((char *)(arg0) + (0x364))) & 0xFFFEFFFF);
}
