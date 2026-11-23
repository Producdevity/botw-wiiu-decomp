typedef signed char s8;

extern "C" void fn_0434c018(void*);

extern "C" void fn_03c1c574(void *arg0) {
    (*(s8 *)((char *)(arg0) + (1))) = 0;
    (*(s8 *)((char *)(arg0) + (2))) = 0;
    fn_0434c018((char *)arg0 + 0x40);
    (*(s8 *)((char *)(arg0) + (6))) = 0;
    fn_0434c018((char *)arg0 + 0x98);
    (*(s8 *)((char *)(arg0) + (7))) = 0;
}
