typedef int s32;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" void fn_035963a4(void *arg0) {
    void *temp_r31;

    temp_r31 = (char *)arg0 + 0x568;
    fn_030bb668(temp_r31);
    (*(s32 *)((char *)(arg0) + (0x564))) = 0;
    fn_030bb69c(temp_r31);
}
